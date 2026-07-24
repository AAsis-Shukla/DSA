#include<iostream>
using namespace std;
class Node {
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int data){
            this->data = data;
            prev = NULL;
            next = NULL;
        }
};
class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }
        void push_front(int value){
            Node* newNode = new Node(value);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        void push_back(int value){
            Node* newNode = new Node(value);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }
        void printList(){

            // Head to Tail traversing 
            // Node* temp = head;
            // while(temp != NULL){
            //     cout<<temp->data<<" -> ";
            //     temp = temp->next;
            // }
            // cout<<"NULL"<<endl;


            // Tail to Head traversing
            Node* temp = tail;
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    List list;
    list.push_front(90);
    list.push_back(100);
    list.push_front(80);
    list.printList();
    return 0;
}