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
        int a1=0,a2=0;
        int sum=0;
        for (int i = 0; i < num; i++)
        {
            if (arr1[i]>arr2[i]){
                a1=1;
                if (a2==0){
                    sum++;
                }
                else{
                    a2=0;
                }

            }
            else if (arr1[i]<arr2[i]){
                a2=1;
                if (a1==0){
                    sum++;
                }
                else{
                    a1=0;
                }
            }
        }
        if (sum>=0){
            std:: cout << sum << std:: endl;
        }
        else{
            std:: cout << sum*(-1) << std:: endl;
        }
        n--;    
    }
}