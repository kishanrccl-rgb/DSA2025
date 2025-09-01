// string_reverse.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    cout << "Enter string: ";
    cin >> s;
    int n = strlen(s);
    cout << "Reversed: ";
    for (int i = n-1; i >= 0; i--)
        cout << s[i];
    cout << endl;
    return 0;
}