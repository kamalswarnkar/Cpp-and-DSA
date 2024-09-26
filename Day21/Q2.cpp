#include <iostream>
#include <unordered_set>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void createCycle(int pos) {
        if (pos < 0) return;
        Node* temp = head;
        Node* cycleNode = nullptr;
        int index = 0;

        while (temp->next) {
            if (index == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            index++;
        }
        if (cycleNode) {
            temp->next = cycleNode;  
        }
    }

    bool hasCycle() {
        unordered_set<Node*> visited;
        Node* temp = head;
        while (temp) {
            if (visited.find(temp) != visited.end()) {
                return true;
            }
            visited.insert(temp);
            temp = temp->next;
        }
        return false;  
    }
};

int main() {
    LinkedList ll;

    cout << "Enter values for the linked list (end with -1): ";
    int value;
    while (true) {
        cin >> value;
        if (value == -1) break;
        ll.append(value);
    }

    cout << "Enter position to create a cycle (-1 for no cycle): ";
    int pos;
    cin >> pos;

    ll.createCycle(pos);

    if (ll.hasCycle()) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
