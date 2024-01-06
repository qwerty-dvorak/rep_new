/*
A Latin square is a 3×3 grid made up of the letters A, B, and C such that in each row, the letters A, B, and C each appear once, and in each column, the letters A, B, and C each appear once.
You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

Input
The first line of the input contains a single integer t (1≤t≤108) — the number of testcases.
Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of A, B, C, or ?. Each test case is a Latin square with exactly one of the letters replaced with a question mark ?
Output
For each test case, output the letter that was replaced.
*/

#include <iostream>
int main() {
    int t;
    std::cin >> t;

    while (t--) {
        char a[3];
        int f=0,g=0,h=0;
        while  (f==0)
        {
            std::cin >> a[0] >> a[1] >> a[2];
            for (int i=0; i<3; i++) 
            {
                if (a[i]!="A") 
                {
                    f=1;
                }
                else break;
                if a[]
                
            }
        }
    }
    return 0;
}