// simple_queue_menu.cpp
#include <iostream>
using namespace std;
#define MAX 100
int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1)
        cout << "Queue is full\n";
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
        cout << "Dequeued: " << queue[front++] << endl;
}

void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

void peek() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
        cout << "Front: " << queue[front] << endl;
}

void isEmpty() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";
}

void isFull() {
    if (rear == MAX - 1)
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
