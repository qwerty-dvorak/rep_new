#include <iostream>

int main(){
    int arr[4]={3,1,2,4};
    for(int i=0,k=0;i<4;i++){
        int subar[4-i][i+1];
        for(int j=0;j<4-i;j++,k++){
            subar[i][j]=arr[k];
            }
        }
    return 0;
}