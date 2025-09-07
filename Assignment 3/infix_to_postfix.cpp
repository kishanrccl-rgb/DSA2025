// infix_to_postfix.cpp
#include <iostream>
#include <cstring>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    char infix[100], stack[100], postfix[100];
    int top = -1, k = 0;
    cout << "Enter infix: ";
    cin >> infix;
    for (int i = 0; infix[i]; i++) {
        char c = infix[i];
        if (isalnum(c))
            postfix[k++] = c;
        else if (c == '(')
            stack[++top] = c;
        else if (c == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[k++] = stack[top--];
            if (top != -1) top--;
        } else {
            while (top != -1 && prec(stack[top]) >= prec(c))
                postfix[k++] = stack[top--];
            stack[++top] = c;
        }
    }
    while (top != -1)
        postfix[k++] = stack[top--];
    postfix[k] = '\0';
    cout << "Postfix: " << postfix << endl;
    return 0;
}
