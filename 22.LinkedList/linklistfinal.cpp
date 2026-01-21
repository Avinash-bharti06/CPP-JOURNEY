#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        newNode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;   // first node
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display the linked list
    cout << "\nLinked List elements: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
