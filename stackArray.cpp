#include <iostream>
using namespace std;

class Stack {
    // properties
    int *arr ;
    int top ;
    int size ;

    // functions
    public:
    Stack(int n) {
        size = n ;
        arr = new int[size] ;
        top = -1 ;
    }

    void push(int element) {
        if(size - top >1) {
            top++ ;
            arr[top] = element ;
        }

        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop (){
        if (top >=0 ) {
            top--;
        }

        else {
            cout << "stack underflow" << endl;
        }
    }

    int peek() {
        if ( top > 0  && top < size){
            return arr[top] ;
        }

        else {
            cout << "stack is empty" << endl;
            return -1 ;
        }
    }

    bool isEmpty() {
        if ( top == -1) {
            return true ;
        }

        else {
        return false ;
        }
    }

    void print() {
        for ( int i = top ; i >= 0 ; i--) {
            cout << arr[i] << " " ;
        }
        cout << endl ;
    }
};

int main () {
    Stack s(5); // stack created of size 5

  cout << s.isEmpty() << endl;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6); // stack overflow
    
    s.print();

    s.pop();
    s.print();

    cout << s.peek() << endl;

    return 0;

}
