#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Queue(int n) {
        size = n ;
        arr = new int[size];
        front = 0 ;
        rear = 0 ;
    }

    void enqueue(int element) {
        if (rear == size) {
            cout << "Queue Overflow" << endl;
        }

        else {
            arr[rear] = element ;
            rear++;
        }
    }

    void dequeue() {
        if (front == rear) {
            cout << "Queue Underflow" << endl;
        }

        else {
            arr[front] = -1;
            front++;
        }
        if (front == rear) {
            front = 0 ;
            rear = 0 ;
        }
    }

    void print() {
        for( int i = front ; i < rear ; i++){
            cout << arr[i] << " " ;
        }

        cout << endl;
    }
};

int main () {
    Queue q(5) ;

    q.enqueue(10) ;
    q.enqueue(20) ; 
    q.enqueue(30) ;
    q.print() ;

    q.dequeue() ;
    q.print() ;

    return 0 ;
}