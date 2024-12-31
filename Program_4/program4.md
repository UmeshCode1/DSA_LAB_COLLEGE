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

---
<h3>Output image </h3>

![Output image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/874e49b3b25390b800800cf9b02e820818a67539/Program_4/Screenshot%202024-12-31%20100444.png)

