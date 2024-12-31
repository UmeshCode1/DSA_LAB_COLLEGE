# DSA Lab Programs (Semester 3)

This repository contains my college DSA lab programs from Semester 3. Below is the list of programs included in this collection.

---

## List of Programs

| S.No | Program Description |
|------|----------------------|
| 1 | Program to input marks of 5 subjects and print the total and percentage using arrays. |
| 2 | Program to find the highest and lowest element in an array. |
| 3 | Program to read two 3×3 matrices and add them. |
| 4 | Program to create a linked list and implement insertion and deletion operations on it. |
| 5 | Program to generate the Fibonacci series using recursion. |
| 6 | Program to create a stack and implement "Push" and "Pop" operations on it. |
| 7 | Program to create a queue and implement insertion and deletion operations on it. |
| 8 | Program to create a circular queue and implement insertion and deletion operations on it. |
| 9    | Program to traverse a binary tree in:<br>  a. Pre-order<br> b. In-order<br>  c. Post-order |
| 10 | Program to implement binary search. |
| 11 | Program to implement sorting of data using:<br> a. Bubble Sort<br> b. Selection Sort<br> c. Insertion Sort |
| 12 | Program to implement a graph and traverse it using:<br>    Breadth First Search (BFS) <br>   Depth First Search (DFS) |

---

## How to Use

1. Clone the repository:
   ```bash
   git clone <https://github.com/UmeshCode1/DSA_LAB_COLLEGE.git>

---





### Connect with Me:
- **GitHub**: [github.com/Umesh.Code1](https://github.com/UmeshCode1)
- **LinkedIn**: [linkedin.com/in/UmeshPatel](https://www.linkedin.com/in/umesh-patel-5647b42a4/)
- **Email**: umesh.code1@gmail.com

---

_"Learning never stops, and neither does coding."_ 😊

---
<div style="text-align: center;">
  <h2>Program 9</h2>
</div>

---
<h2> Program 9</h2>

## Program 9 Preview

You can view the code and output image for Program 9 [here](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/main/Program_9/project9.md).
```cpp
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


```
<h3> Output is </h3>

![Output Image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/4d409cd9324578be445233b9e69bbd61a3861de9/Program_9/Screenshot%202024-12-31%20102845.png)
