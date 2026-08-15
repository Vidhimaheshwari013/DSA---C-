#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;
    int capacity;

public:
    Queue() {
        front = 0;
        rear = -1;
        capacity = 100;
    }

    bool isEmpty() {
        return (front > rear);
    }

    bool isFull() {
        return (rear == capacity - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        arr[++rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front++];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();   // 10 20 30

    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();   // 20 30

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
