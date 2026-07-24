#include<iostream>
#include<deque>
using namespace std;
class queue{
    deque<int> q;
    public:
    void push(int value){
        q.push_back(value);
    }
    void pop(){
        q.pop_front();
    }
    int front(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};
void printQueue(queue &q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    printQueue(q);
    return 0;

}