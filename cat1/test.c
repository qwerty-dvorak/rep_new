#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a string

    printf("You entered: ");
    puts(str);  // Write the string

    return 0;
}