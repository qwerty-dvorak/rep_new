#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello, world!";
    char *s2 = ", ";
    char *token = strtok(s1, s2);

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, s2);
    }

    return 0;
}