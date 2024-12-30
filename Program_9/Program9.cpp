// Program to traverse a binary tree in pre-order, in-order and post-order.

#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* newNode(char data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// In-order traversal
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Pre-order traversal
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Post-order traversal
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";

    Node* root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');
    root->left->left = newNode('D');
    root->left->right = newNode('E');
   // root->right->left = newNode('F');
    root->left->left->left = newNode('G');
    root->right->right = newNode('F');

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}


// Output:
// Program to traverse a binary tree in pre-order, in-order and post-order.

// Umesh Patel
// Enrollment Number: 0126AL231140

// In-order traversal: G D B E A C F
// Pre-order traversal: A B D G E C F
// Post-order traversal: G D E B F C A

