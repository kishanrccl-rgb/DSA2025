// reverse_string_stack.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], stack[100];
    int top = -1;
    cout << "Enter string: ";
    cin >> str;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
        stack[++top] = str[i];
    cout << "Reversed: ";
    while (top != -1)
        cout << stack[top--];
    cout << endl;
    return 0;
}
