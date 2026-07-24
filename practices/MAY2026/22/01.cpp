// stack with dynamic size
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class stack{
    Node* head = NULL;
    public:
    void push(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        if(empty()){
            cout<<"stack is empty!"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    int top(){
        if(empty()){
            // cout<<"stack is empty!"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){
        return head == NULL;
    }
};
int main(){
    stack s1;
    s1.push(78);
    s1.push(90);
    s1.push(12);
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    return 0;
}