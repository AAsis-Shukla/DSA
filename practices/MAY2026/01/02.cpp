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
class List{
    private:
        Node* head;
        Node* tail;
    public:
        List(){
            head = tail = NULL;
        }
        void push_front(int value){
            Node* newNode = new Node(value);
            if(head == NULL){           // in case the list is blank
                head = tail = newNode;
            }else{                      // item are there in list
                newNode->next = head;
                head = newNode;
            }
        }
        void push_back(int value){
            Node* newNode = new Node(value);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void pop_front(){
            if(head == NULL){
                cout<<"List is Empty!"<<endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        void pop_back(){
           if(head == NULL){
                cout<<"List is Empty!"<<endl;
                return;
            }
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
        int search(int value){
            Node* temp = head;
            int pos = 0;
            while(temp->data != value && temp->next != NULL){
                temp = temp->next;
                pos++;
            }
            if(temp->data == value){
                return pos;
            }
            return -1;
        }
        void printList(){
            Node* temp = head;
            int count = 0;
            while(temp != NULL){
                cout<<temp->data<<" => ";
                temp = temp->next;
                count++;
            }
            
            if(count == 0){
                cout<<"List is empty!"<<endl;
            }else{
                cout<<"NULL"<<endl;
                cout<<"Total item : "<<count<<endl;
            }
        }
        void insert(int value, int pos){
            Node* newNode = new Node(value);
            
            if(pos == 0){
                push_front(value);
                return;
            }
            if(pos<0){
                cout<<"Invalid Index!"<<endl;
                return;
            }
            Node* temp = head;
            for(int i=0;i<(pos-1);i++){
                temp = temp->next;
                if(temp == tail){
                    cout<<"Invalid Index!"<<endl;
                    return;
                }
            }
            newNode->next = temp->next;
            temp->next = newNode;
        } 
};
int main(){
    List list;
    list.push_front(10);
    list.push_front(5);
    list.push_back(20);
    list.push_back(30);
    list.printList();
    
    list.pop_back();
    list.printList();
    list.push_back(90);
    list.printList();
    // cout<<list.search(10)<<endl;
    list.insert(45,3);
    list.printList();
    return 0;
}