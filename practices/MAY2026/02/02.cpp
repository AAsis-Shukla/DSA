
#include<iostream>
using namespace std;
class video{
    public:
        string title;
        video* next;
        video(string value){
            title = value;
            next = NULL;
        }
};
class history{
    video* head;
    video* tail;
    public:
        history(){
            head = tail = NULL;
        }
        string latest(){
            if(head == NULL){
                return "No History!";
            }
            return head->title;
        }
        bool isEmpty(){
            if(head == NULL){
                return true;
            }
            return false;
        }
        void push(string value){
            video* newvideo = new video(value);
            if(isEmpty()){
                head = tail = newvideo;
            }else{
                newvideo->next = head;
                head = newvideo;
            }
        }
        void pop(){
            if(isEmpty()){
                cout<<"No history!"<<endl;
                return;
            }
            video* temp = head;
            head = head->next;
            delete temp;
        }
        
        void showHistory(){
            if(isEmpty()){
                cout<<"No history yet!"<<endl;
                return;
            }
            video* temp = head;
            while(temp != NULL){
                cout<<temp->title<<endl;
                temp =  temp->next;
            }
        }
};
int main(){
    history s1;
    s1.push("ram");
    s1.push("shyam");
    s1.push("ajj tak");
    s1.pop();
    s1.push("mohan geet");
    s1.showHistory();
    cout<<"Latest : "<<s1.latest()<<endl;
    return 0;
}