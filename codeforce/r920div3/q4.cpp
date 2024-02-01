#include <iostream>

void sortarray(int *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp; 
            }
        }
    }
}

int main(){
    int k;
    std::cin >> k;
    while(k!=0){
        int n,m;
        int sum=0;
        std::cin >> n >> m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            std::cin >> a[i];
        for(int i=0;i<m;i++)
            std::cin >> b[i];
        sortarray(a,n);
        sortarray(b,m);
        for (int i=0;i<n;i++)
            sum=sum+b[m-1-i]-a[i];
        std::cout << sum << std::endl;
        k--;
    }
}