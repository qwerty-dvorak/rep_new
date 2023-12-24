#include <iostream>

int main(){
    int n=8;
    int k=n;
    int c=0;
    for (int t=1;t<=k;t++){
        int i=t;
        int r=n%i;
        while (r!=0){
            c++;
            n=i;
            i=r;
            r=n%i;
        } 
    }
    std::cout << c << std::endl;
}