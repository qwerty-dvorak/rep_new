#include <iostream>

int main(){
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    while (n!=1){
        int i=2;
        if (n%i==0){
            while (n%i==0){
                std::cout << i << " * ";
                n=n/i;
            }
        }
        else{
            i++;
        }
    }
    return 0;
}