#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        arr[++top] = value;
    }

    void pop() {
        if (top != -1) {
            top--;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int peek() {
        return arr[top];
    }
};

int main() {
    int n;
    cin >> n;
    Stack stack(n);
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }
    for (int i = 0; i < n; i++) {
        if (!stack.isEmpty()) {
            cout << stack.peek();
            stack.pop();
            if (i < n - 1) {
                cout << ",";
            }
        }
    }
    cout << endl;
    return 0;
}
