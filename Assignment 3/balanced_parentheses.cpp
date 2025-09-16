#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char expr[100], stack[100];
    int top = -1, ok = 1;
    cout << "Enter expression: ";
    cin >> expr;
    for (int i = 0; expr[i]; i++) {
        if (expr[i] == '(')
            stack[++top] = '(';
        else if (expr[i] == ')') {
            if (top == -1) {
                ok = 0;
                break;
            }
            top--;
        }
    }
    if (ok && top == -1)
        cout << "Balanced\n";
    else
        cout << "Not balanced\n";
    return 0;
}
