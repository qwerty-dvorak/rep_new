#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: \n";
    std::cin >> num1 >> num2;
    int result = gcd(num1, num2);
    std::cout << "GCD: " << result << std::endl;
    return 0;
}
