// linked list practice
#include<iostream>
// #include<list>
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
class list{
    Node* head;
    public:
    list(){
        head = NULL;
    }
    void push_front(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void push_back(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insert(int value, int pos)
    {
        if(pos < 1)
        {
            cout << "Invalid Position\n";
            return;
        }

        // Insert at beginning
        if(pos == 1)
        {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        for(int i = 1; i < pos - 1; i++)
        {
            if(temp == NULL)
            {
                cout << "Position not found!\n";
                return;
            }

            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout << "Position not found!\n";
            return;
        }

        Node* newNode = new Node(value);

        newNode->next = temp->next;
        temp->next = newNode;
    }
    // int search(){

    // }
    void pop_front(){
        if(head == NULL){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp = head;
        if(temp->next == NULL){
            delete temp ; // or delete head;
            return;
        }
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    list ll;
    ll.push_back(8);
    ll.push_back(10);
    ll.push_back(17);
    ll.push_back(15);
    ll.insert(12,2);
    ll.printList();

    // printing the list item of stl list
    // for(int x : ll){
    //     cout<<x<<" -> ";
    // }
    // cout<<"NULL" <<endl;
    return 0;
}