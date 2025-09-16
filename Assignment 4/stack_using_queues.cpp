// stack_using_queues.cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1, q2;
    int ch, val;
    while (1) {
        cout << "1.Push 2.Pop 3.Exit\n";
        cin >> ch;
        if (ch == 1) {
            cout << "Enter value: ";
            cin >> val;
            q2.push(val);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1, q2);
        } else if (ch == 2) {
            if (q1.empty()) cout << "Stack empty\n";
            else {
                cout << "Popped: " << q1.front() << endl;
                q1.pop();
            }
        } else if (ch == 3) break;
        else cout << "Invalid\n";
    }
    return 0;
}
