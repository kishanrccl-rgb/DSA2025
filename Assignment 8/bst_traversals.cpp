#include <iostream>
using namespace std;

struct Node { int data; Node* left; Node* right; };

Node* newNode(int v) { Node* n = new Node; n->data = v; n->left = n->right = NULL; return n; }

void preorder(Node* r) { if (!r) return; cout << r->data << " "; preorder(r->left); preorder(r->right); }
void inorder(Node* r) { if (!r) return; inorder(r->left); cout << r->data << " "; inorder(r->right); }
void postorder(Node* r) { if (!r) return; postorder(r->left); postorder(r->right); cout << r->data << " "; }

int main() {
    Node* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->left = newNode(5);
    cout << "Preorder: "; preorder(root); cout << "\n";
    cout << "Inorder: "; inorder(root); cout << "\n";
    cout << "Postorder: "; postorder(root); cout << "\n";
    return 0;
}
