#include <iostream>

int main(){
    int n=5;
    int k=n;
    int c=0;
    for (int t=1+k;t<=2*k;t++){ 
        int i=t;
        int u=0;
        int r=n%i;
        u++;
        while (r!=0){
            u++;
            n=i;
            i=r;
            r=n%i;
        }
        c+=u;
        std::cout << u << std::endl;
    }
    return 0;
}