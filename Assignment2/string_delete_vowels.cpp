#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    cout << "Enter string: ";
    cin >> s;
    cout << "Without vowels: ";
    for (int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            cout << s[i];
    }
    cout << endl;
    return 0;
}