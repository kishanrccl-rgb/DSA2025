// tridiagonal_matrix.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3, tri[3*3];
    cout << "Enter tri-diagonal elements (row-wise):\n";
    for (int i = 0; i < 3*3; i++)
        cin >> tri[i];
    cout << "Tri-diagonal matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == j+1 || i+1 == j)
                cout << tri[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
