#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
    Node* n = new Node;
    n->data = val;
    n->next = head;
    head = n;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse(Node*& head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


int main() {
    Node* head = NULL;
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);
    reverse(head);
    display(head);
    return 0;
}
