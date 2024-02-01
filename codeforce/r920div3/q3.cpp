#include <iostream>

int main(){
    int k;
    std:: cin >> k;
    while(k!=0){
        long long int n,f,a,b;
        long long int c; 
        int t=0;
        std:: cin >> n >> f >> a >> b;
        long long int arr[2]={0,0};
        for(int i=0;i<n;i++){
            long long int num;
            std:: cin >> num;
            arr[0]=arr[1];
            arr[1]=num;
            if ((arr[1]-arr[0])<b){
                if (a*(arr[1]-arr[0])<b){
                f=f-a*(arr[1]-arr[0]);
                }
            }
            else{
                f=f-b;
            }
            if (f<=0){
                t=1;
                break;
            }
        }
        if (t==1){
            std:: cout << "NO" << std:: endl;
        }
        else{
            std:: cout << "YES" << std:: endl;
        }
        k--;
    }
    return 0;
}