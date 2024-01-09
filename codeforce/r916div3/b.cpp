#include <iostream>

int main(){
    int t;
    std::cin>>t;
    while (t--){
        int n,k;
        std::cin>>n>>k;
        for (int i=1;i!=k++2;i++){
            std::cout<<i<<" ";
        }
        for (int i=n;i!=k+1;i--){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}