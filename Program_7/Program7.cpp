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




