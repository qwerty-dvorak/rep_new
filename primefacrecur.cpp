#include <iostream>

int recursive(int n, int i){
    if (n==1){
        return 0;
    }
    else if (n%i==0){
        std::cout << i << " * ";
        n=n/i;
        return recursive(n,i);
    }
    else{
        i++;
        return recursive(n,i);
    }
}


int main(){
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    int i=2;

    //non recursive

    /*
    while (n!=1){
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
    */

    //recursive
    recursive(n,i);

    return 0;
}