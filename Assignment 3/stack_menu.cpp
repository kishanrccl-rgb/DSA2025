#include <iostream>
using namespace std;

#define MAX 100
int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1)
        cout << "Stack is full\n";
    else
        stack[++top] = val;
}

void pop() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Popped: " << stack[top--] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << stack[top] << endl;
}

void isEmpty() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";
}

void isFull() {
    if (top == MAX - 1)
        cout << "Stack is full\n";
    else
        cout << "Stack is not full\n";
}

int main() {
    int ch, val;
    while (1) {
        cout << "\n1.Push 2.Pop 3.Display 4.Peek 5.isEmpty 6.isFull 7.Exit\n";
        cin >> ch;
        if (ch == 1) {
            cout << "Enter value: ";
            cin >> val;
            push(val);
        } else if (ch == 2) pop();
        else if (ch == 3) display();
        else if (ch == 4) peek();
        else if (ch == 5) isEmpty();
        else if (ch == 6) isFull();
        else if (ch == 7) break;
        else cout << "Invalid\n";
    }
    return 0;
}
