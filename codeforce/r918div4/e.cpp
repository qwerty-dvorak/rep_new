#include <iostream>
#include <cstdlib>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        char l[n];
        for (int i=0; i<n; i++) {
            std::cin >> l[i];
        }
        int a[n]
        for (int i=0; i<n; i++) {
            if (l[i]=='-') a[i]=-1;
            else a[i]=1;
        }
        int sum=0;
        for (int i=0; i<n; i++) {
            sum+=a[i];
        }
        int asum=std::abs(sum);
        std::cout << asum << "\n";
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