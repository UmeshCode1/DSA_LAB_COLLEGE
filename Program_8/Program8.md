```cpp

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
}


```  
<h1> Output image</h1>


![Screenshot](../Program_8/Screenshot%202024-12-31%20120605.png)
