#include <iostream>
using namespace std;
struct Node {
int data; // Data part
Node* next; // Pointer to the next node
};
void insertAtBeginning(Node* &head, int value) {
Node* newNode = new Node();
newNode->data = value;
newNode->next = head; // Point new node to the current head
head = newNode; // Update head to new node
}
void insertAtEnd(Node* &head, int value) {
Node* newNode = new Node();
newNode->data = value;
newNode->next = nullptr; // New node points to NULL
if (head == nullptr) { // If list is empty
head = newNode;
return;
}

Node* temp = head;
while (temp->next != nullptr) { // Traverse to the last node
temp = temp->next;
}
temp->next = newNode; // Insert new node at the end
}

void display(Node* head) {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
int main() {
Node* head = nullptr;
insertAtBeginning(head, 10);
insertAtBeginning(head, 20);
insertAtEnd(head, 30);
insertAtEnd(head, 40);
cout << "Updated Linked List: ";
display(head);
return 0;
}

