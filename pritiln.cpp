#include <iostream>

#include <chrono>

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
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "\nTime taken by function: " << duration.count() << " microseconds" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    printPrimes(n);
    std::cout << std::endl;
    return 0;
}
