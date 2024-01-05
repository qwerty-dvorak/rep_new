/*
You are given three digits a, b, c. Two of them are equal, but the third one is different from the other two.

Find the value that occurs exactly once.

Input
The first line contains a single integer t (1≤t≤270) — the number of test cases.

The only line of each test case contains three digits a, b, c (0≤a, b, c≤9). Two of the digits are equal, but the third one is different from the other two.

Output
For each test case, output the value that occurs exactly once.
*/

#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a == b)
            std::cout << c << "\n";
        else if (b == c)
            std::cout << a << "\n";
        else
            std::cout << b << "\n";
    }

    return 0;
}