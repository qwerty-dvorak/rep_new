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

int main() {
    int a[5]={1,2,3,4,5};
    int i,j,k=1,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    printf("%d %d %d %d\n",i,j,k,m);
    printf("%d",a[1]);

    return 0;
}