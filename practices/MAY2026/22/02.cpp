// stack with static length
#include<iostream>
using namespace std;
class stack {
    int topIdx = -1;
    int lenght = -1;
    int* arr;
    public:
    stack(int n){
        lenght = n;
        arr = new int[lenght];
    }
    void push(int value){
        if(topIdx < lenght-1){
            topIdx ++;
            arr[topIdx] = value;
        }else{
            cout<<"stack is full!"<<endl;
        }
    }
    void pop(){
        if(empty()){
            cout<<"stack is empty!"<<endl;
            return;
        }
        topIdx --;
    }
    int top(){
        if(empty()){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return arr[topIdx];
    }
    bool empty(){
        return topIdx == -1;
    }
    bool full(){
        return topIdx == (lenght-1);
    }
};
int main(){
    stack s1(5);
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