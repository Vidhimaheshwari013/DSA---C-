#include <iostream>
using namespace std;

// Definition of a singly linked list node...basic structure
class Node{
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// Insert at position

// delete tail 
void deleteTail(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "List is empty, cannot delete tail." << endl;
        return;
    }
    if(head -> next == NULL) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* temp = head;
    while(temp -> next != tail) {
        temp = temp -> next;
    }
    delete tail;
    tail = temp;
    tail -> next = NULL;
}

// Printing the linked list
void Print(Node* head) {
    Node* i = head;
    while(i != NULL) {
        cout << i -> data << " " << "-> ";
        i = i -> next;
    }
    cout << " NULL" << endl;
}

int main () {
    Node* n1 = new Node(10);
    
    Node* head = n1;
    Node* tail = n1 ;

    insertAtHead(head,5);
    insertAtTail(tail,20);    
    insertAtTail(tail,30);    
    Print(head);

    deleteTail(head,tail);
    Print(head);
    return 0;
}
