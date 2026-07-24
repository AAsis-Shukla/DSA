#include<iostream>
#include<vector>
#include<string>
using namespace std;
// template class (like: generic class or function in java)
template <typename T>    
class Stack {
    public:
    vector<T> vec;
    void push(T value){
        vec.push_back(value);
    }
    void pop(){
        if(vec.size() == 0){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        vec.pop_back();
    }
    T top(){
        if(vec.size() == 0){
            cout<<"stack is Empty!"<<endl;
            return NULL;
        }          
        int lastIndex = vec.size() - 1;
        return vec[lastIndex];
    }
    bool isEmpty(){
        return vec.empty();
    }
};
int main(){
    Stack <int> s1;
    // Stack <float> price;
    // Stack <string> name;

    // name.push("ashsih");
    // name.push("aman");
    // name.push("chaman");
    // name.push("ratan");
    // while(!name.vec.empty()){
    //     cout<<name.top()<<" ";
    //     name.pop();
    // }
    // s1.push(12);
    // s1.push(18);
    // s1.push(20);
    // s1.pop();
    // price.push(098.90);
    // price.push(8.90);
    // price.push(78.90);
    // while(!s1.vec.empty()){
    //     cout<<s1.top()<<" ";
    //     s1.pop();
    // }
    // cout<<endl;
    // while(!price.vec.empty()){
    //     cout<<price.top()<<" ";
    //     price.pop();
    // }
    return 0;
}