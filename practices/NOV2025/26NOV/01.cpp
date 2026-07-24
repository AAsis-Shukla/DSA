#include<iostream>
using namespace std;
// abstract class
class Shape{
    public :
        bool isLine = true;
        virtual void draw() = 0; // Abstract function / pure virtual function
};
class Square : public Shape {
    public :
        void draw(){
            cout << " Square drawn!";
        }
};
class Circle : public Shape{
    public :
        void draw(){
            cout<<" Circle draawn!";
        }
};
int main(){
    
    return 0;
}