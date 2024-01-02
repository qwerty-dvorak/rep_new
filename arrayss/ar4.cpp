#include <iostream>

int main() {
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1 >> r2 >> c2;
    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            std::cin >> m1[i][j];

    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            std::cin >> m2[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                result[i][j] += m1[i][k] * m2[k][j];


    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            std::cout << result[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}