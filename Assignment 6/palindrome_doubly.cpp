#include <iostream>
using namespace std;

struct Node { char data; Node* prev; Node* next; };

bool isPalindrome(Node* head) {
    if (!head) return true;
    Node* tail = head; while (tail->next) tail = tail->next;
    while (head != tail && head->prev != tail) {
        if (head->data != tail->data) return false;
        head = head->next; tail = tail->prev;
    }
    return true;
}

int main() {
    // build L E V E L
    Node* a = new Node{'L',NULL,NULL}; Node* b = new Node{'E',NULL,NULL}; Node* c = new Node{'V',NULL,NULL}; Node* d = new Node{'E',NULL,NULL}; Node* e = new Node{'L',NULL,NULL};
    a->next=b; b->prev=a; b->next=c; c->prev=b; c->next=d; d->prev=c; d->next=e; e->prev=d;
    cout << (isPalindrome(a)?"True":"False") << "\n";
    return 0;
}
