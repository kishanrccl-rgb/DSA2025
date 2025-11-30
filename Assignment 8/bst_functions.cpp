#include <iostream>
using namespace std;

struct Node { int data; Node* left; Node* right; };
Node* newNode(int v) { Node* n = new Node; n->data = v; n->left = n->right = NULL; return n; }

Node* insert(Node* root, int val) {
    if (!root) return newNode(val);
    if (val < root->data) root->left = insert(root->left, val);
    else if (val > root->data) root->right = insert(root->right, val);
    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

int findMax(Node* root) { while (root->right) root = root->right; return root->data; }
int findMin(Node* root) { while (root->left) root = root->left; return root->data; }

Node* findMinNode(Node* root) { while (root && root->left) root = root->left; return root; }

Node* removeNode(Node* root, int key) {
    if (!root) return NULL;
    if (key < root->data) root->left = removeNode(root->left, key);
    else if (key > root->data) root->right = removeNode(root->right, key);
    else {
        if (!root->left) { Node* r = root->right; delete root; return r; }
        else if (!root->right) { Node* l = root->left; delete root; return l; }
        Node* succ = findMinNode(root->right);
        root->data = succ->data;
        root->right = removeNode(root->right, succ->data);
    }
    return root;
}

int main() {
    Node* root = NULL;
    int vals[] = {4,2,6,1,3,5};
    for (int v : vals) root = insert(root, v);
    cout << "Search 3: " << (search(root,3)?"Found":"Not found") << "\n";
    cout << "Max: " << findMax(root) << " Min: " << findMin(root) << "\n";
    root = removeNode(root, 2);
    cout << "After deleting 2, Inorder: ";
    // simple inorder print
    return 0;
}
