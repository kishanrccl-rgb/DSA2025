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

int find_middle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow ? slow->data : -1;
}

int main() {
    Node* head = NULL;
    insert(head, 5); insert(head, 4); insert(head, 3); insert(head, 2); insert(head, 1);
    cout << "Middle: " << find_middle(head) << endl;
    return 0;
}
