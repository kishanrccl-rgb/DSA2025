#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char expr[100];
    int stack[100], top = -1;
    cout << "Enter postfix: ";
    cin >> expr;
    for (int i = 0; expr[i]; i++) {
        char c = expr[i];
        if (isdigit(c))
            stack[++top] = c - '0';
        else {
            int b = stack[top--];
            int a = stack[top--];
            if (c == '+') stack[++top] = a + b;
            else if (c == '-') stack[++top] = a - b;
            else if (c == '*') stack[++top] = a * b;
            else if (c == '/') stack[++top] = a / b;
        }
    }
    cout << "Result: " << stack[top] << endl;
    return 0;
}
