#include <iostream>

int main(){
    int n=5;
    int k=n;
    int c=0;
    for (int t=1+k;t<=2*k;t++){ 
        int i=t;
        int u=0;
        int r=i%k;
        u++;
        while (r!=0){
            u++;
            i=n;
            n=r;
            r=i%n;
        }
        c+=u;
        std::cout << u << std::endl;
    }
    return 0;
}