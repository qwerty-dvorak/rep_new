#include <iostream>

int sortarray(int *arr,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}

int main(){
    int arr[6]={6,3,8,2,5,7};
    for(int i=0;i<4;i++){
        int subar[4-i][i+1];
        for(int j=0;j<4-i;j++){
            subar[i][j]=arr[j];
            }
        }
    return 0;
}