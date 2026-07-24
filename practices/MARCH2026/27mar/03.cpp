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
    public:
    Node* head;
    Node* tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail =newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insert(int val, int pos){
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"Invalid Index!"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front(){
        if(head == NULL){
            cout<<"The List is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<<"The List is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }
    void print_list(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" => ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }
    int helper(Node* temp, int key){
        if(temp == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }
        int idx = helper(temp->next, key);
        if(idx == -1){
            return -1;
        }
        return idx+1;
    }
    int searchRec(int key){
        return helper(head,key);
    }
};

int main(){
    List ll;
    ll.push_front(12);
    ll.push_front(10);
    ll.push_back(20);
    ll.push_back(25);
    ll.insert(15,2);
    ll.tail->next = ll.head->next;
    cout<<isCycle(ll.head)<<endl;
    
    // cout<<ll.searchRec(25)<<endl;

    return 0;
}