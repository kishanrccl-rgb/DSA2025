#include <iostream>
using namespace std;

struct Node { int data; Node* prev; Node* next; };

int size_doubly(Node* head) {
    int c = 0; while (head) { c++; head = head->next; }
    return c;
}

int size_circular(Node* head) {
    if (!head) return 0;
    int c = 0; Node* t = head; do { c++; t = t->next; } while (t != head);
    return c;
}

int main() {
    // build a simple doubly list: 1<->2<->3
    Node* a = new Node{1,NULL,NULL}; Node* b = new Node{2,NULL,NULL}; Node* c = new Node{3,NULL,NULL};
    a->next = b; b->prev = a; b->next = c; c->prev = b;
    cout << "Doubly size: " << size_doubly(a) << "\n";
    // circular: 1->2->3->1
    a->next = b; b->next = c; c->next = a;
    cout << "Circular size: " << size_circular(a) << "\n";
    return 0;
}
