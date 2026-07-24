#include<iostream>
using namespace std;
class queue{
    int* arr;
    int capacity;
    int currSize;
    int f,r;
    public:
    queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }
    void push(int value){
        if(currSize < capacity){
            r = (r+1) % capacity;
            arr[r] = value;
            currSize++;
        }else{
            cout<<"queue is full!"<<endl;
        }
    }
    void pop(){
        if(!empty()){
            f = (f+1) % capacity;
            currSize--;
        }else{
            cout<<"queue is Empty!"<<endl;
        }
    }
    int front(){
        if(!empty()){
            return arr[f];
        }
        return -1;
    }
    bool empty(){
        return currSize == 0;
    }
};
int main(){
    

    
    return 0;
}