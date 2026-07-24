#include<iostream>
using namespace std;
class Parent{
    public:
       void show(){
         cout<<"parent show method ....";
       }
};
class Child : public Parent{
    public:
        void show(){
            cout<<"child class show methods....";
        }
};

int main(){
   
   Child child1;
   child1.show();
    return 0;
}