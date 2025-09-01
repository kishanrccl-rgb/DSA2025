// lower_triangular_matrix.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3, lower[6];
    cout << "Enter lower triangular elements:\n";
    for (int i = 0; i < 6; i++)
        cin >> lower[i];
    cout << "Lower triangular matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                cout << lower[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}