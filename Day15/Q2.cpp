#include <iostream>
#include <string>

using namespace std;

struct node{
    int data;
    node* next;
};

void insatend(node*& head, int value){
    node* newnode = new node();
    
    newnode->data = value;
    newnode->next = nullptr;
    
    if(head == nullptr){
        head = newnode;
    }else{
        node* tmp = head;
        while(tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = newnode;
    }
}

void delval(node*& head, int value){
    if(head == nullptr){
        cout << "List is Empty" << endl;
        return;
    }
    
    if(head->data == value){
        node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    
    node* current = head;
    node* prev = nullptr;
    
    while(current != nullptr && current->data != value){
        prev = current;
        current = current->next;
    }
    
    if(current->data == value){
        prev->next = current->next;
        delete current;
        return;
    }else{
        cout << "Value not FOUND!!" << endl;
        return;
    }
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
    int n, value, del;
    
    cout << "No. of Nodes: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> value;
        insatend(head, value);
    }
    
    cout << "Value to delete: ";
    cin >> del;
    
    cout << "Original List: ";
    display(head);
    
    
    delval(head, del);
    
    cout << "Updated List: ";
    display(head);
    
    return 0;
}
