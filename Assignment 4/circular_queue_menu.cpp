#include <iostream>
using namespace std;
#define MAX 100
int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % MAX == front)
        cout << "Queue is full\n";
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = val;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Queue is empty\n";
    else {
        cout << "Dequeued: " << queue[front] << endl;
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        cout << "Queue is empty\n";
    else {
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1)
        cout << "Queue is empty\n";
    else
        cout << "Front: " << queue[front] << endl;
}

void isEmpty() {
    if (front == -1)
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";
}

void isFull() {
    if ((rear + 1) % MAX == front)
        cout << "Queue is full\n";
    else
        cout << "Queue is not full\n";
}

int main() {
    int ch, val;
    while (1) {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Peek 5.isEmpty 6.isFull 7.Exit\n";
        cin >> ch;
        if (ch == 1) {
            cout << "Enter value: ";
            cin >> val;
            enqueue(val);
        } else if (ch == 2) dequeue();
        else if (ch == 3) display();
        else if (ch == 4) peek();
        else if (ch == 5) isEmpty();
        else if (ch == 6) isFull();
        else if (ch == 7) break;
        else cout << "Invalid\n";
    }
    return 0;
}
