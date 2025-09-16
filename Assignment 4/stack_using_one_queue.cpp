#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int ch, val;
    while (1) {
        cout << "1.Push 2.Pop 3.Exit\n";
        cin >> ch;
        if (ch == 1) {
            cout << "Enter value: ";
            cin >> val;
            int size = q.size();
            q.push(val);
            for (int i = 0; i < size; i++) {
                q.push(q.front());
                q.pop();
            }
        } else if (ch == 2) {
            if (q.empty()) cout << "Stack empty\n";
            else {
                cout << "Popped: " << q.front() << endl;
                q.pop();
            }
        } else if (ch == 3) break;
        else cout << "Invalid\n";
    }
    return 0;
}
