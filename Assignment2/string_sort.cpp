#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[5][100];
    cout << "Enter 5 strings:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int i = 0; i < 5-1; i++) {
        for (int j = i+1; j < 5; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    cout << "Sorted strings:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
    return 0;
}