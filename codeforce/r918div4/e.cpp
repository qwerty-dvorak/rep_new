#include <iostream>
int main(){
    int t;
    long a,b;
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        if ((a+b)%2==0) std::cout << "Bob" << "\n";
        else std::cout << "Alice" << "\n";
    }
}