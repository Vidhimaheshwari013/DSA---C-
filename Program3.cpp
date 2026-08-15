#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert element at end
void insert(int x) {
    Node* newNode = new Node;
    newNode->data = x;

    if (head == NULL) {
        newNode->next = newNode;  // points to itself
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

// Remove element x
void removeElement(int x) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* curr = head;
    Node* prev = NULL;

    // Case 1: removing head
    if (head->data == x) {

        // Only one node
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        // Find last node
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    // Case 2: removing middle/end element
    do {
        prev = curr;
        curr = curr->next;
    } while (curr != head && curr->data != x);

    if (curr->data != x) {
        cout << "Element not found\n";
        return;
    }

    prev->next = curr->next;
    delete curr;
}

// Search returns POINTER
Node* search(int x) {
    if (head == NULL)
        return NULL;

    Node* temp = head;

    do {
        if (temp->data == x)
            return temp;

        temp = temp->next;

    } while (temp != head);

    return NULL;
}

// Search returns INDEX (1-based)
int searchIndex(int x) {
    if (head == NULL)
        return -1;

    Node* temp = head;
    int index = 1;

    do {
        if (temp->data == x)
            return index;

        temp = temp->next;
        index++;

    } while (temp != head);

    return -1;   // not found
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}

// MAIN
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();

    cout << "\nSearching for 30...\n";
    Node* p = search(30);
    if (p)
        cout << "Pointer found at address: " << p << endl;
    else
        cout << "Not found\n";

    int pos = searchIndex(30);
    if (pos != -1)
        cout << "Element found at index: " << pos << endl;
    else
        cout << "Element not found\n";

    cout << "\nRemoving 20...\n";
    removeElement(20);
    display();

    return 0;
}
