#include <iostream>
#include <cstdlib>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            std::cin >> a[i];
        }
        int sum=0;
        for (int i=0; i<n; i++) {
            sum+=a[i];
        }
        std::cout << fabs(a) << "\n";
    }
    return 0;
}



/*
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

*/