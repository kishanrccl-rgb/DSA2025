// interleave_queue.cpp
#include <iostream>
using namespace std;

int main() {
    int q[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> q[i];
    int half = n / 2;
    cout << "Interleaved: ";
    for (int i = 0; i < half; i++)
        cout << q[i] << " " << q[i + half] << " ";
    if (n % 2 != 0)
        cout << q[n - 1];
    cout << endl;
    return 0;
}
