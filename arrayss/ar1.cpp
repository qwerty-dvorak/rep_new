#include <iostream>

int main(){
    int n[5]={1,2,3,4,5};
    int m[5];
    int *p;
    p=n;
    for (int i=0;i<5;i++){
        m[i]=*(p+4-i);
    }
    for (int i=0;i<5;i++){
        std::cout << m[i] << " ";
    }

}