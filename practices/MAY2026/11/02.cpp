#include<iostream>
#include<stack>
using namespace std;


// queue implementation using two stack
class queue{
    stack<int> s1;
    stack<int> s2;
    public :
        void push(int value){
            // transfer s1 data to s2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            // push value to s1
            s1.push(value);

            // again transfer s2 data to s1
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        void pop(){
            s1.pop();
        }
        int front(){
            if(empty()){
                cout<<"Queue is Empty!"<<endl;
                return -1;
            }
            
            return s1.top();
            
        }
        bool empty(){
            return s1.empty(); 
        }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.front()<<endl;
    return 0;
}