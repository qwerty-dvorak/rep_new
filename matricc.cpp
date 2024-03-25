#include <iostream>

using namespace std;

void print_transpose(int mat[3][3]) {
    cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int mat[n][n];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The diagonal elements are: ";
    for (int i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;
    return 0;
}