#include <iostream>

int main(){
    int n;
    std:: cin >> n;
    while(n!=0){
        int num;
        std:: cin >> num;
        int arr1[num];
        int arr2[num];
        for (int i=0;i<num;i++){
            std:: cin >> arr1[i];
        }
        for (int i=0;i<num;i++){
            std:: cin >> arr2[i];
        }
        int sum=0;
        for (int i = 0; i < num; i++)
        {
            if (arr1[i]>arr2[i]){
                sum++;
            }
            else if (arr1[i]<arr2[i]){
                sum--;
            }
        }
        if (sum>=0){
            std:: cout << sum << std:: endl;
        }
        else{
            std:: cout << sum*(-1) << std:: endl;
        }
        
    }
}