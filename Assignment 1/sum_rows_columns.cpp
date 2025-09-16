#include <iostream>
using namespace std;

int main() {
    int a[2][2];
    cout << "Enter 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++)
            sum += a[i][j];
        cout << "Sum of row " << i << ": " << sum << endl;
    }
    for (int j = 0; j < 2; j++) {
        int sum = 0;
        for (int i = 0; i < 2; i++)
            sum += a[i][j];
        cout << "Sum of column " << j << ": " << sum << endl;
    }
    return 0;
}