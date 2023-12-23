#include <iostream>

int main() {
    int num1, num2;
    float average;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    average = (num1 + num2) / 2.0;

    std::cout << "The average is: " << average << std::endl;

    return 0;
}
function run_and_push() {
    $@
    git add -A
    git commit --allow-empty-message -m ''
    git push
}