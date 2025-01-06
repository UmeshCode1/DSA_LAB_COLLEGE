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






