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

int count_and_delete(Node*& head, int key) {
    int count = 0;
    while (head && head->data == key) {
        Node* t = head;
        head = head->next;
        delete t;
        count++;
    }
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->next->data == key) {
            Node* t = curr->next;
            curr->next = t->next;
            delete t;
            count++;
        } else {
            curr = curr->next;
        }
    }
    return count;
}

int main() {
    Node* head = NULL;
    insert(head, 1); insert(head, 3); insert(head, 2); insert(head, 1); insert(head, 2); insert(head, 2); insert(head, 1);
    int key = 1;
    int cnt = count_and_delete(head, key);
    cout << "Count: " << cnt << ", Updated List: ";
    display(head);
    return 0;
}
