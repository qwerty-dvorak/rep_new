#include <iostream>

int main(){
    int n=8;
    int c=0;
    for (int i=1;i<=n;i++){
        int r=n%i;
        while (r!=0){
            c++;
            r=n%i;
            n=i;
            i=r;
        } 
    }
    std::cout << c << std::endl;
}