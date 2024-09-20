#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

void inssort(node*& head, int value){
    node* newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    
    if(head == nullptr || head->data >= value){
        newnode->next = head;
        head = newnode;
        return;
    }
    
    node* curr = head;
    
    while(curr->next != nullptr && curr->next->data < value){
        curr = curr->next;
    }
    
    newnode->next = curr->next;
    curr->next = newnode;
}

void display(node* head){
    node* tmp = head;
    while(tmp != nullptr){
        cout << tmp->data;
        if(tmp->next != nullptr){
            cout << "->";
        }
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){
    node* head = nullptr;
    int n, value;
    
    cout << "No 0f Nodes: ";
    cin >> n;
    
    cout << "Enter Values: ";
    for(int i = 0; i < n; i++){
        cin >> value;
        inssort(head, value);
    }
    
    display(head);
    
    return 0;
}
