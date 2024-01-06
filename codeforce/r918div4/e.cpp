#include <iostream>
int main(){
    int t,a,b;
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        if ((a+b)%2==0) std::cout << "Alice" << "\n";
        else std::cout << "Bob" << "\n";
    }
}