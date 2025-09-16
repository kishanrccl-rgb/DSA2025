#include <iostream>
using namespace std;

int main() {
    int arr[100], n, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] > arr[j])
                count++;
    cout << "Number of inversions: " << count << endl;
    return 0;
}