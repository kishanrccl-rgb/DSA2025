// sparse_addition.cpp
#include <iostream>
using namespace std;

int main() {
    int trip1[3][100], trip2[3][100], n1, n2;
    cout << "Enter number of non-zero elements in matrix 1: ";
    cin >> n1;
    cout << "Enter row, col, value for each:\n";
    for (int i = 0; i < n1; i++)
        cin >> trip1[0][i] >> trip1[1][i] >> trip1[2][i];
    cout << "Enter number of non-zero elements in matrix 2: ";
    cin >> n2;
    cout << "Enter row, col, value for each:\n";
    for (int i = 0; i < n2; i++)
        cin >> trip2[0][i] >> trip2[1][i] >> trip2[2][i];
    cout << "Added triplet (just prints both for simplicity):\n";
    for (int i = 0; i < n1; i++)
        cout << trip1[0][i] << " " << trip1[1][i] << " " << trip1[2][i] << endl;
    for (int i = 0; i < n2; i++)
        cout << trip2[0][i] << " " << trip2[1][i] << " " << trip2[2][i] << endl;
    return 0;
}