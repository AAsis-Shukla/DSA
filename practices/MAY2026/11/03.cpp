#include<iostream>
#include<stack>
#include<queue>
using namespace std;
// function to reverse a queue using stack
void reverseQueue(queue<int> &q){
    stack<int> s;
    // queue to stack
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    // stack to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
void printQueue(queue<int> &q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    reverseQueue(q);
    printQueue(q);
    return 0;
}