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

int maxDepth(Node* root) { if (!root) return 0; int l = maxDepth(root->left); int r = maxDepth(root->right); return 1 + (l>r?l:r); }
int minDepth(Node* root) { if (!root) return 0; int l = minDepth(root->left); int r = minDepth(root->right); return 1 + (l<r?l:r); }

bool isBSTUtil(Node* root, int minv, int maxv) {
    if (!root) return true;
    if (root->data < minv || root->data > maxv) return false;
    return isBSTUtil(root->left, minv, root->data-1) && isBSTUtil(root->right, root->data+1, maxv);
}

bool isBST(Node* root) { return isBSTUtil(root, -100000, 100000); }

int main() {
    Node* root = NULL;
    int vals[] = {4,2,6,1,3,5};
    for (int v : vals) root = insert(root, v);
    cout << "Max depth: " << maxDepth(root) << " Min depth: " << minDepth(root) << "\n";
    cout << "Is BST: " << (isBST(root)?"Yes":"No") << "\n";
    return 0;
}
