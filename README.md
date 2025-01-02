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
## GitHub Pages

The repository is also published at [GitHub Pages](https://umeshcode1.github.io/DSA_LAB_COLLEGE/). Visit the page to see the programs in action.

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

<h1 align="center">PROGRAMS CODE AND OUTPUT PREVIEW</h1>

---
<h2 align="center">PROGRAM 1</h2>

```cpp

// Program to input marks of 5 subjects and print the total and percentage using arrays.

#include <iostream>
using namespace std;
int main()
{
    int marks[5], i, total = 0;
    float percentage;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter marks of 5 subjects: \n";
        for (i = 0; i < 5; i++)
    {
      cout<<"Subject "<<i+1<<": ";
      cin >> marks[i];
      total += marks[i];
    }
    percentage = (float)total / 5;
    cout << "Total marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}


```
<h2 align="center"> OUTPUT</h2>


![image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/01a6763714c483190c5be88793fad6adedf5f20f/Program_1/Screenshot%202024-12-31%20095542.png)

---
<h2 align="center">PROGRAM 2</h2>

```cpp

// Program to find highest and lowest element in an array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout << "The highest element in the array is: " << max << endl; 
    cout << "The lowest element in the array is: " << min << endl;
    return 0; 
}

```
<h2 align="center">OUTPUT </h2>

![image ](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/708cc5d24dfa5e1d0ad081cfa7e76d7e88ed8a49/Program_2/Screenshot%202024-12-31%20095915.png)

---
<h2 align="center">PROGRAM 3</h2>

```CPP

// Program to read two 3x3 matrices and add them.

#include <iostream>
using namespace std;
int main(){
int m,n,i,j;
cout<<"Umesh Patel\nEnrollment Number: 0126AL231140\n";
cout<<"Enter the number of rows and columns of the matrix: ";
cin>>m>>n; 
int a[m][n],b[m][n],c[m][n];
cout<<"Enter the elements of the first matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element "<<i+1<<","<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<"Enter the elements of the second matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element "<<i+1<<","<<j+1<<": ";
cin>>b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}

cout<<"The sum of the two matrices is: \n"; 
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
return 0;
}

```
<h2 align="center">OUTPUT </h2>

![image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/01d2b46b353c59e37cff76e59b2120fa7d3a1bac/Program_3/Screenshot%202024-12-31%20100412.png)

---
<h2 align="center">PROGRAM 4</h2>

```cpp

// Program to create a linked list and implement insertion and deletion operations on it.

#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class with insertion and deletion operations
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        // If the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        // If the value is not found
        if (temp->next == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        // Delete the node
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Function to display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test the Linked List operations
int main() {
    cout<<"Umesh Patel\nEnrollment Number: 0126AL231140\n";

    LinkedList list;
    
    // Insert elements at the beginning
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);
    
    // Display the list
    cout << "List after insertion at the beginning: ";
    list.display();

    // Insert elements at the end
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    
    // Display the list
    cout << "List after insertion at the end: ";
    list.display();

    // Delete a node with value 20
    list.deleteNode(20);
    cout << "List after deleting node with value 20: ";
    list.display();

    // Delete a node with value 100 (not in the list)
    list.deleteNode(100);
    
    return 0;

```
<h2 align="center">OUTPUT</h2>

![Output image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/874e49b3b25390b800800cf9b02e820818a67539/Program_4/Screenshot%202024-12-31%20100444.png)

---
<h2 align="center">PROGRAM 5</h2>

```cpp
// Program to generate Fibonacci series using recursion.

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    cout << "The Fibonacci series is: ";
    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
    return 0;
}
```
<h2 align="center">OUTPUT</h2>

![output image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/d3cb3ee30d1b1b73eb34818303ccefb00749b8c1/Program_5/image.png)

---
<h2 align="center">PROGRAM 6</h2>

```CPP

 // Program to create a stack and implement push and pop operations on it.

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1; // Return an error value
        }
        int data = arr[top];
        top--;
        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, data;

    cout << "Name: Umesh Patel\n";  
    cout << "Enrollment No: 0126AL231140\n";


    while (true) {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to push: ";
                cin >> data;
                stack.push(data);
                break;

            case 2:
                data = stack.pop();
                if (data != -1) { // Check for error
                    cout << "Popped element: " << data << endl;
                }
                break;

            case 3:
                stack.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }
}

```
<h2 align="center">OUTPUT</h2>

![output image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/2c765e870a10b85a37d4ad5f39f561ea1366edbe/Program_6/Screenshot%202024-12-31%20115625.png)
---
<h2 align="center">PROGRAM 7</h2>

```CPP
// Program to create a queue and implement enqueue and dequeue operations on it.

#include <stdio.h>
#define MAX 10 // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1);
}

// Function to check if the queue is full
int isFull() {
    return (rear == MAX - 1);
}

// Function to insert an element into the queue
void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = item;
    }
}

// Function to delete an element from the queue
int dequeue() {
    int item;
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1; // Return an error value
    } else {
        item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }
        return item;
    }
}

int main() {
    int choice, item;

    printf("Name: Umesh Patel\n");
    printf("Enrollment No: 0126AL231140\n");

    while (1) {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                item = dequeue();
                if (item != -1) {
                    printf("Dequeued element: %d\n", item);
                }
                break;

            case 3:
                if (isEmpty()) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements:\n");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

```
<h2 align="center">OUTPUT</h2>

![output image](Program_7/Screenshot%202024-12-31%20120332.png)

---
<h2 align="center">PROGRAM 8</h2>

```CPP
// Program to create a circular queue and implement insertion and deletion operations on it.

#include <iostream>
using namespace std;

#define MAX_SIZE 5 // Define the maximum size of the circular queue

class CircularQueue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((front == 0 && rear == MAX_SIZE - 1) || front == rear + 1);
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full\n";
        } else {
            if (isEmpty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }
            arr[rear] = data;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        } else {
            int data = arr[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }
            return data;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements are: ";
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % MAX_SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    CircularQueue cq;
    int choice, data;

    cout << "Name: Umesh Patel\n";
    cout << "Enrollment No: 0126AL231140\n";

    while (true) {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to enqueue: ";
                cin >> data;
                cq.enqueue(data);
                break;

            case 2:
                data = cq.dequeue();
                if (data != -1) {
                    cout << "Dequeued element: " << data << endl;
                }
                break;

            case 3:
                cq.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}

```  
<h2 align="center">OUTPUT</h2>

![Screenshot](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/b5723592af884cc353d874ff1a9ecf2ca9a39144/Program_8/Screenshot%202024-12-31%20120605.png)

---
<h2 align="center">PROGRAM 9</h2>

```CPP
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
<h2 align="center">OUTPUT</h2>

![Screenshot](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/3a28eee8128c56a363b94750520045f6a9b45a5b/Program_9/Screenshot%202024-12-31%20102845.png)

---
<h2 align="center">PROGRAM 10</h2>

```CPP
// Program to implement binary search .

#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }

        if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Elements are: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
```
<h2 align="center">OUTPUT</h2>

![Screenshot](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/57273cba96ce6409c94c79f94d0502b0fef4d707/Program_10/Screenshot%202024-12-31%20120908.png)
---
