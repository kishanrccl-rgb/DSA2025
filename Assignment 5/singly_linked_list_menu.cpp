#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;

void insert_begin(int val) {
    Node* n = new Node;
    n->data = val;
    n->next = head;
    head = n;
}

void insert_end(int val) {
    Node* n = new Node;
    n->data = val;
    n->next = NULL;
    if (!head) head = n;
    else {
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
    }
}

void insert_after(int key, int val) {
    Node* t = head;
    while (t && t->data != key) t = t->next;
    if (t) {
        Node* n = new Node;
        n->data = val;
        n->next = t->next;
        t->next = n;
    }
}

void insert_before(int key, int val) {
    if (!head) return;
    if (head->data == key) {
        insert_begin(val);
        return;
    }
    Node* t = head;
    while (t->next && t->next->data != key) t = t->next;
    if (t->next) {
        Node* n = new Node;
        n->data = val;
        n->next = t->next;
        t->next = n;
    }
}

void delete_begin() {
    if (!head) return;
    Node* t = head;
    head = head->next;
    delete t;
}

void delete_end() {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = NULL;
        return;
    }
    Node* t = head;
    while (t->next->next) t = t->next;
    delete t->next;
    t->next = NULL;
}

void delete_value(int val) {
    if (!head) return;
    if (head->data == val) {
        Node* t = head;
        head = head->next;
        delete t;
        return;
    }
    Node* t = head;
    while (t->next && t->next->data != val) t = t->next;
    if (t->next) {
        Node* d = t->next;
        t->next = d->next;
        delete d;
    }
}

void search(int val) {
    Node* t = head;
    int pos = 0;
    while (t) {
        if (t->data == val) {
            cout << "Found at position: " << pos << endl;
            return;
        }
        t = t->next;
        pos++;
    }
    cout << "Not found\n";
}

void display() {
    Node* t = head;
    cout << "List: ";
    while (t) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    int ch, val, key;
    while (1) {
        cout << "\n1.InsertBegin 2.InsertEnd 3.InsertAfter 4.InsertBefore 5.DeleteBegin 6.DeleteEnd 7.DeleteValue 8.Search 9.Display 10.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Val: "; cin >> val; insert_begin(val); break;
            case 2:
                cout << "Val: "; cin >> val; insert_end(val); break;
            case 3:
                cout << "After val: "; cin >> key; cout << "Val: "; cin >> val; insert_after(key, val); break;
            case 4:
                cout << "Before val: "; cin >> key; cout << "Val: "; cin >> val; insert_before(key, val); break;
            case 5:
                delete_begin(); break;
            case 6:
                delete_end(); break;
            case 7:
                cout << "Val: "; cin >> val; delete_value(val); break;
            case 8:
                cout << "Val: "; cin >> val; search(val); break;
            case 9:
                display(); break;
            case 10:
                return 0;
            default:
                cout << "Invalid\n";
        }
    }
    return 0;
}
