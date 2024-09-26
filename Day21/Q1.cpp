#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    void insertAtPosition(int position, int value) {
        Node* newNode = new Node(value);
        if (position == 0) {
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1 && current != nullptr; i++) {
                current = current->next;
            }
            if (current == nullptr) {
                return;
            }
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr) {
                cout << " <-> ";
            }
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int n, value, position;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        dll.insertAtPosition(i, value);
    }

    cout << "Initial Linked List: ";
    dll.display();

    cout << "Enter index to insert after: ";
    cin >> position;
    cout << "Enter value to insert: ";
    cin >> value;

    dll.insertAtPosition(position + 1, value);

    cout << "Linked List after insertion: ";
    dll.display();

    return 0;
}
