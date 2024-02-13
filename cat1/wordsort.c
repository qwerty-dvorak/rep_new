#include <stdio.h>
#include <string.h>

// Function to sort an array of words using bubble sort
void sortWords(char *words[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
}
void printWordFrequencies(char *words[], int count) {
    int freq = 1;

    for (int i = 1; i < count; i++) {
        if (strcmp(words[i], words[i - 1]) == 0) {
            freq++;
        } else {
            printf("%s: %d\n", words[i - 1], freq);
            freq = 1;
        }
    }

    printf("%s: %d\n", words[count - 1], freq);
}
int main() {
    char sentence[] = "This is a test sentence";
    char *delimiter = " ";
    char *token;
    char *words[50];  // Array to hold pointers to words
    int count = 0;

    // Get the first token
    token = strtok(sentence, delimiter);

    // Walk through other tokens
    while (token != NULL) {
        words[count] = token;
        count++;
        token = strtok(NULL, delimiter);
    }

    // Sort the words
    sortWords(words, count);

    // Print the sorted words
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    int count = sizeof(words) / sizeof(words[0]);
    printWordFrequencies(words, count);

    return 0;
}