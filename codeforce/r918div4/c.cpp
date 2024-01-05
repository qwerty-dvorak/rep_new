/*
Calin has n buckets, the i-th of which contains ai wooden squares of side length 1.Can Calin build a square using all the given squares?

Input The first line contains a single integer t (1≤t≤104) — the number of test cases.The first line of each test case contains a single integer n (1≤n≤2⋅105) — the number of buckets. The second line of each test case contains n integers a1,…,an
 (1≤ai≤109) — the number of squares in each bucket. The sum of n over all test cases does not exceed 2⋅105
Output For each test case, output "YES" if Calin can build a square using all of the given 1×1
 squares, and "NO" otherwise.
*/

#include <iostream>
#include <cmath>

bool isPerfectSquare(int num) {
    int root = std::sqrt(num);
    return root * root == num;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int a[n];
        int sum=0;
        for (int i=0; i<n; i++) {
            std::cin >> a[i];
            sum+=a[i];
        }
        if (isPerfectSquare(sum)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}