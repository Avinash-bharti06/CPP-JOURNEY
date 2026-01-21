#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp = NULL, *newNode = NULL;
    int choice = 1;
    int value;

    while (choice == 1) {
        newNode = new Node();

        cout << "Enter data: ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }

        cout << "Do you want to continue? (1 = Yes, 0 = No): ";
        cin >> choice;
    }

    // Display linked list
    cout << "\nLinked List elements: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    

    return 0;
}
