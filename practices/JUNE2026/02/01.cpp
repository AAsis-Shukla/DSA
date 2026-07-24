// pushAtBottom by recursion
// reverse of a stack
#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s, int key){
    if(s.empty()){
        s.push(key);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s,key);
    s.push(temp);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}
void printStack(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    printStack(s);
    reverse(s);
    // printStack(s);
    return 0;
}