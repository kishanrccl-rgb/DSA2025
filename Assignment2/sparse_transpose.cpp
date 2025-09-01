// sparse_transpose.cpp
#include <iostream>
using namespace std;

int main() {
    int triplet[3][100], n;
    cout << "Enter number of non-zero elements: ";
    cin >> n;
    cout << "Enter row, col, value for each:\n";
    for (int i = 0; i < n; i++)
        cin >> triplet[0][i] >> triplet[1][i] >> triplet[2][i];
    cout << "Transpose triplet:\n";
    for (int i = 0; i < n; i++)
        cout << triplet[1][i] << " " << triplet[0][i] << " " << triplet[2][i] << endl;
    return 0;
}