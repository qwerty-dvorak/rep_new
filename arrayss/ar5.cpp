#include <iostream>


void gje(int a[3][3], int inv[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            inv[i][j] = (i == j) ? 1 : 0;

    for (int i = 0; i < 3; i++) {
        int aii = a[i][i];
        for (int j = 0; j < 3; j++) {
            a[i][j] /= aii;
            inv[i][j] /= aii;
        }

        for (int j = 0; j < 3; j++) {
            if (i != j) {
                int aji = a[j][i];
                for (int k = 0; k < 3; k++) {
                    a[j][k] -= aji * a[i][k];
                    inv[j][k] -= aji * inv[i][k];
                }
            }
        }
    }
}

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 9, 8}
    };
    int inv[3][3];

    gje(a, inv);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            std::cout << inv[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}