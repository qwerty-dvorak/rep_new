#include <stdio.h>

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