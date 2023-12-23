#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimes(int n) {
    std::cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    printPrimes(n);
    std::cout << std::endl;
    return 0;
}
