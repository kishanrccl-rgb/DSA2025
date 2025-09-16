#include <iostream>
using namespace std;

int main() {
    int a[2][2], t[2][2];
    cout << "Enter 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            t[j][i] = a[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
    return 0;
}