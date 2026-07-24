#include <iostream>
using namespace std;

// Node class
class Node {
    public:
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = NULL;
        }
};

// Linked List class
class List {
    private:
        Node* head;

    public:
        // Constructor
        List() {
            head = NULL;
        }

        // 🔸 Insert at beginning
        void push_front(int value) {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }

        // 🔸 Insert at end
        void push_back(int value) {
            Node* newNode = new Node(value);

            if (head == NULL) {
                head = newNode;
                return;
            }

            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        // 🔸 Delete a node
        void deleteNode(int value) {
            if (head == NULL) {
                cout << "List is empty\n";
                return;
            }

            if (head->data == value) {
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* temp = head;
            while (temp->next != NULL && temp->next->data != value) {
                temp = temp->next;
            }

            if (temp->next == NULL) {
                cout << "Value not found\n";
                return;
            }

            Node* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }

        // 🔸 Display list
        void display() {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
};

// 🔸 Main function
int main() {
    List list;

    list.push_front(10);
    list.push_front(5);
    list.push_back(20);
    list.push_back(30);

    cout << "Linked List: ";
    list.display();

    list.deleteNode(20);
    cout << "After deletion: ";
    list.display();

    return 0;
}