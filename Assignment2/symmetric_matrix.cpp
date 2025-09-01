// symmetric_matrix.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3, sym[6];
    cout << "Enter lower triangle elements (including diagonal):\n";
    for (int i = 0; i < 6; i++)
        cin >> sym[i];
    int mat[3][3], k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            mat[i][j] = mat[j][i] = sym[k++];
    cout << "Symmetric matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}