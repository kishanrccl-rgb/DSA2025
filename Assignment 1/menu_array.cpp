#include <iostream>
using namespace std;

int arr[100], n = 0;

void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display() {
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insert() {
    int pos, val;
    cout << "Enter position (0-based): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
}

void del() {
    int pos;
    cout << "Enter position to delete (0-based): ";
    cin >> pos;
    for (int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
}

void linear_search() {
    int val, found = 0;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Found at position " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Not found\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) create();
        else if (choice == 2) display();
        else if (choice == 3) insert();
        else if (choice == 4) del();
        else if (choice == 5) linear_search();
        else if (choice == 6) break;
        else cout << "Invalid choice\n";
    }
    return 0;
}