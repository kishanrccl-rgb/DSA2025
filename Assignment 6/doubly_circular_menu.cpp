#include <iostream>
using namespace std;

struct Node { int data; Node* prev; Node* next; };
Node* head = NULL;

void insert_end(int val) {
    Node* n = new Node{val, NULL, NULL};
    if (!head) { head = n; head->next = head->prev = head; return; }
    Node* tail = head->prev;
    tail->next = n; n->prev = tail; n->next = head; head->prev = n;
}

void display_circular() {
    if (!head) { cout << "Empty\n"; return; }
    Node* t = head;
    do { cout << t->data << " "; t = t->next; } while (t != head);
    cout << head->data << "\n"; // repeat head at end as requirement
}

void insert_begin(int val) { insert_end(val); head = head->prev; }

void delete_value(int val) {
    if (!head) return;
    Node* t = head;
    do {
        if (t->data == val) {
            if (t->next == t) { delete t; head = NULL; return; }
            t->prev->next = t->next; t->next->prev = t->prev;
            if (t == head) head = t->next;
            delete t; return;
        }
        t = t->next;
    } while (t != head);
}

void search_node(int val) {
    if (!head) { cout << "Not found\n"; return; }
    Node* t = head; int pos = 0;
    do { if (t->data == val) { cout << "Found at " << pos << "\n"; return; } pos++; t = t->next; } while (t != head);
    cout << "Not found\n";
}

int main() {
    // simple demo: insert few, display, delete, display
    insert_end(20); insert_end(100); insert_end(40); insert_end(80); insert_end(60);
    cout << "Circular list display (repeat head at end):\n";
    display_circular();
    delete_value(40);
    cout << "After deleting 40:\n";
    display_circular();
    return 0;
}
