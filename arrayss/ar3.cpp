#include <iostream> 

int main(){
    int r,c;
    int n[c][r];
    std::cout << "Enter the number of rows: ";
    std::cin >> r;
    std::cout << "Enter the number of columns: ";
    std::cin >> c;
    int l=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            n[i][j]=l;
            l++;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cout << n[i][j] << " ";
        }
        std::cout << std::endl;
    }
}