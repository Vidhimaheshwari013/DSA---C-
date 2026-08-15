#include <iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node* prev ;
    Node* next ;

    // Constructor
    Node(int d) {
        data = d;
        prev = NULL ;
        next = NULL ;
    }
};

void insertAtHead(Node* &head , int d) {
    Node* temp = new Node(d) ;

    temp->next = head ;
    head = temp ;
}

void inserAtTail(Node* &tail, int d) {
    Node* temp = new Node(d) ;

    tail -> next = temp ;
    temp -> prev = tail ;
    tail = temp ;

}

void deleteBegin(Node* &head, int d) {
    if(head == NULL) {
        cout << "List is empty, cannot delete head." << endl;
        return;
    }
    Node* temp = head;
    head = head -> next;
    if(head != NULL) {
        head -> prev = NULL;
    }
    delete temp;
}

void deleteEnd(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    if(head -> next == NULL) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* temp = tail;
    tail = tail -> prev;
    tail -> next = NULL;
    delete temp;
}

void print(Node* head) {
    Node* temp = head ;

    while ( temp != NULL) {
        cout << temp -> data << " " << " <-> " ;
        temp = temp -> next ;
    }
    cout << " NULL " << endl ;
}

void getLength(Node* head) {
    Node* temp = head ;
    int len = 0 ;

    while ( temp != NULL) {
        len++ ;
        temp = temp -> next ;
    }
    cout << "Length = " << len << endl ;
}

int main() {
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1 ;

    print(head);
    getLength(head);

    insertAtHead(head, 12);
    print(head);
    return 0 ;
}