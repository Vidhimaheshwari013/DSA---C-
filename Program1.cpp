#include <iostream>
using namespace std;

struct Node {
    int data;       
    Node* next;     
};

Node* head = NULL;

// 1)Insert an element x at the beginning of the singly linked list
void insertAtBeginning(int x) {
    Node* newNode = new Node; // creating new node
    newNode->data = x;
    newNode->next = head;     // new node connects to old head
    head = newNode;           // new node becomes head
}

// 2)Insert an element x at ith position in the singly linked list
void insertAtPosition(int x, int pos) {
    Node* newNode = new Node;
    newNode->data = x;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// 3) Remove an element from the beginning of the singly linked list
void removeBeginning() {
    if (head == NULL) {
        cout << "List empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// 4) Remove an element from ith position in the singly linked list.
void removePosition(int pos) {
    if (head == NULL) {
        cout << "Empty list\n";
        return;
    }

    Node* temp = head;

    if (pos == 1) {
        head = head->next;
        delete temp;
        return;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range\n";
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// 5) Search element in singly linked list
Node* search(int x) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == x)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Print list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtPosition(15, 2);
    display();

    removeBeginning();
    display();

    removePosition(2);
    display();

    Node* found = search(15);
    if (found)
        cout << "Element found at address: " << found << endl;
    else
        cout << "Element not found\n";

    return 0;
}
