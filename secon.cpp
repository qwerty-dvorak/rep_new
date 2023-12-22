#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "foobar ";
        } else if (i % 3 == 0) {
            std::cout << "foo ";
        } else if (i % 5 == 0) {
            std::cout << "bar ";
        } else {
            std::cout << i << " ";
        }
    }

    return 0;
}
