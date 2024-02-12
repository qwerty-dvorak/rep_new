#include <stdio.h>
#include <string.h>

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

    // Print the words
    for (int i = 0; i < count; i++) {
        printf("Word[%d]: %s\n", i, words[i]);
    }

    return 0;
}