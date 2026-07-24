/*
                        5   top (entry)
                        4
                        3
                        2
                        1   tail

    stack list 
        operation:
            push()
            pop()
            traverse()
            isEmpty()
            peek()
            
*/
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data = value;
            next = NULL;
        }
};
class Stack{
    Node* head;
    Node* tail;
    public:
        Stack(){
            head = tail = NULL;
        }
        int peek(){
            if(head == NULL){
                return -1;
            }
            return head->data;
        }
        bool isEmpty(){
            if(head == NULL){
                return true;
            }
            return false;
        }
        void push(int value){
            Node* newNode = new Node(value);
            if(isEmpty()){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
        void printStack(){
            if(isEmpty()){
                cout<<"Stack is Empty!"<<endl;
                return;
            }
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp =  temp->next;
            }
        }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.pop();
    s1.push(5);
    cout<<s1.isEmpty()<<endl;
    return 0;
}