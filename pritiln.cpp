#include <iostream>
#include <chrono>

void printPrimes(int n) {
    auto start = std::chrono::high_resolution_clock::now();

    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "\nTime taken by function: " << duration.count() << " microseconds" << std::endl;

    std::cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            //std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    printPrimes(n);
    return 0;
}
