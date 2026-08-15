#include <iostream>
using namespace std;

// Doubly Linked List
struct Node {
    int data;       
    Node* next;     
    Node* prev;     
};

Node* head = NULL;

// 1) Insert at the Beginning
void insertAtBeginning(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// 2) Insert at the End
void insertAtEnd(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) { 
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// 3) Remove from the Beginning
void removeFromBeginning() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

// 4) Remove from the End
void removeFromEnd() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    if (temp->next == NULL) {  
        head = NULL;
        delete temp;
        return;
    }

    while (temp->next != NULL){
        temp = temp->next;
        temp->prev->next = NULL;
        delete temp;
    }
}

// Display list
void display() {
    Node* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertAtBeginning(20);
    insertAtBeginning(10);
    insertAtEnd(30);
    insertAtEnd(40);
    display();

    removeFromBeginning();
    display();

    removeFromEnd();
    display();

    return 0;
}
