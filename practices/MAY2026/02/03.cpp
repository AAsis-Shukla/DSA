// Floyd's Cycle finding algorithms
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
class List {
    public:
        Node* head;
        Node* tail;
        List(){
            head = tail = NULL;
        }
        void push_front(int value){
            Node* newNode = new Node(value);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void printList(){
            Node* temp = head;
            while (temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            return true;
        }
    }
    return false;
}
void removeCycle(Node* head){
    // detect cycle
    bool isCycle = false;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout<<"Cycle Exist!"<<endl;
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
        cout<<"Cycle Not Exist!"<<endl;
        return;
    }
    slow = head;
    if(slow == fast){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
        return;
    }
    
    Node* prev = fast;
    while(slow != fast){
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL;
    return;
}
int main(){
    List list;
    list.push_front(12);
    list.push_front(22);
    list.push_front(15);
    list.tail->next = list.head;
    removeCycle(list.head);
    list.printList();
    return 0;
}