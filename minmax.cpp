#include <iostream>

int main(){
    int arr[4]={3,1,2,4};
    for(int i=0,k=0;i<4;i++){
        int subar[4][4-i];
        for(int j=0;j<4-i;j++){
            subar[i][j]=arr[k];
            }
        }
    return 0;
}