#include <iostream>

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
        int count=0;
        for (int i=0; i<n-1; i++) {
            if (a[i]<a[i+1]) count++;
        }
        std::cout << count << "\n";
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