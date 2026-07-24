#include<iostream>
#include<stack>
#include<string>
using namespace std;
void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}
int main(){
    stack<string> name;
    name.push("ashish");
    name.push("managn");
    name.push("ratan");
    name.push("mohan");
    name.pop();
    pushAtBottom(name,"ram");
    while(!name.empty()){
        cout<<name.top()<<" ";
        name.pop();
    }
    return 0;
}