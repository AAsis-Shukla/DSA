// stack implementation with vector
#include<iostream>
#include<vector>
using namespace std;
class stack {
    vector<int> vec;
    public:
    void push(int value){
        vec.push_back(value);
    }
    void pop(){
        if(empty()){
            cout<<"stack is empty!"<<endl;
            return;
        }
        vec.pop_back();
    }
    int top(){
        if(empty()){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return vec.back();
    }
    bool empty(){
        return vec.empty();
    }
   
};
int main(){
    stack s1;
    s1.push(78);
    s1.push(90);
    s1.push(12);
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    return 0;
}