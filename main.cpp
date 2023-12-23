#include <iostream>
using namespace std;
int main() {
    int num1, num2, sum;
    float average;

    cout << "Enter the numbers: \n";
    cin >> num1 >> num2;
    sum = num1 + num2;
    average = (num1 + num2) / 2.0;
    cout << "The average is: " << average << "\n" << "The sum is: " << sum << "\n";

    return 0;
}