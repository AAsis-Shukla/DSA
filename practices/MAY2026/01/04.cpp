#include<iostream>
#include<cmath>
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
List* addTwoNumber(List* l1, List* l2){
    int n1 = 0,n2 = 0;
    int count = 0;
    int sum;
    Node* temp = l1->head;
    
    while(temp != NULL){
        n1 += temp->data * pow(10,count);
        temp = temp->next;
        count++;
    }
    count = 0;
    temp = l2->head;
    while(temp != NULL){
        n2 += temp->data * pow(10,count);
        temp = temp->next;
        count++;
    }
    sum = n1 + n2;
    List* sumList = new List();
    while(sum>0){
        int digit = sum%10;
        sum /= 10;
        sumList->push_back(digit);
    }
    return sumList;
}
int main(){
    List l1;
    List l2;

    l1.push_back(0);
    // l1.push_back(4);
    // l1.push_back(3);
    
    l2.push_back(0);
    // l2.push_back(6);
    // l2.push_back(4);

    cout<<"I am giving two List\nfirst List:\n";
    l1.printList();
    cout<<"Second List:\n";
    l2.printList();

    cout<<"The result List : \n";


    List* sumList = addTwoNumber(&l1,&l2);
    sumList->printList();
    return 0;
}