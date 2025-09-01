// binary_search.cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = 7, key;
    cout << "Enter number to search: ";
    cin >> key;
    int pos = binarySearch(arr, n, key);
    if (pos != -1)
        cout << "Found at position " << pos << endl;
    else
        cout << "Not found\n";
    return 0;
}