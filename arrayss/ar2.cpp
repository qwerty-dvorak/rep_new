#include <iostream>

int main(){
    int n[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p;
    p=n[0];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            std::cout << *(p+i*3+j) << " ";
        }
        std::cout << std::endl;
    }

    int k=*p;
    for (int i=1;i<9;i++){
        if (k<*(p+i)){
            k=*(p+i);
        }
    }
    std::cout << "Greatest element: " << k << std::endl;
}