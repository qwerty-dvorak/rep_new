#include <iostream> 

int main(){
    int r,c;
    std::cout << "Enter the number of rows: ";
    std::cin >> r;
    std::cout << "Enter the number of columns: ";
    std::cin >> c;
    int n[r][c];
    int transpose[c][r];
    int l=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            n[i][j]=l;
            l++;
        }
    }
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            transpose[i][j]=n[j][i];
        }
    } 
}