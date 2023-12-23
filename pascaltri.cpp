#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            std::cout << "  "; // Add indentation
        }

        int num = 1;
        for (int j = 0; j <= i; j++) {
            std::cout << num << "   ";
            num = num * (i - j) / (j + 1);
        }

        std::cout << std::endl;
    }

    return 0;
}
