#include <iostream>

int main(){
    int n=5;
    int c=0;
    for (int i=0;i<n;i++){
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