#include <stdio.h>

int main(){
    int n;
    int i=121233;
    printf("%.3d\n", i);  // Prints "      -123"

    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}