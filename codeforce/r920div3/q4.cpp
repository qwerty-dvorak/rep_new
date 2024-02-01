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

void alternatesort(int *a, int *b, int n){
    int i=0;
    int j=n-1;
    int t=0;
    sortarray(a,n);
    while(i<j){
        b[t]=a[i];
        t++;
        b[t]=a[j];
        t++;
        i++;
        j--;
    }
    if (n % 2 != 0)
        b[t]=a[i];
}

void reversealtsort(int *a, int *b, int n){
    int i=0;
    int j=n-1;
    int t=0;
    sortarray(a,n);
    while(i<j){
        b[t]=a[j];
        t++;
        b[t]=a[i];
        t++;
        i++;
        j--;
    }
    if (n % 2 != 0)
        b[t]=a[i];
}

int main(){
    int k;
    std::cin >> k;
    while(k!=0){
        int n,m;
        int sum=0;
        std::cin >> n >> m;
        int a[n],a1[n];
        int b[m],b1[m];
        for(int i=0;i<n;i++)
            std::cin >> a[i];
        for(int i=0;i<m;i++)
            std::cin >> b[i];
        alternatesort(a,a1,n);
        reversealtsort(b,b1,m);
        std::cout << std::endl;
        for (int i=0;i<n;i++){
            sum=sum+std::abs(b1[i]-a1[i]);
        }
        std::cout << std::endl;
        std::cout << sum << std::endl;
        k--;
    }
}