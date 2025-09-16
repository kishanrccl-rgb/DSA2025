#include <iostream>
using namespace std;

int main() {
    int n = 3, diag[3];
    cout << "Enter diagonal elements:\n";
    for (int i = 0; i < n; i++)
        cin >> diag[i];
    cout << "Diagonal matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << (i == j ? diag[i] : 0) << " ";
        cout << endl;
    }
    return 0;
}