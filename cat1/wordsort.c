#include <stdio.h>
#include <string.h>

// Function to sort characters of a string using bubble sort
void sortWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (word[j] > word[j + 1]) {
                char temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }
}

int main() {
    char sentence[] = "This is a test sentence";
    char *delimiter = " ";
    char *token;

    // Get the first token
    token = strtok(sentence, delimiter);

    // Walk through other tokens
    while (token != NULL) {
        sortWord(token);
        printf("%s ", token);
        token = strtok(NULL, delimiter);
    }

    return 0;
}