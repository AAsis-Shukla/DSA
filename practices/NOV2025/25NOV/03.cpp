#include<iostream>
using namespace std;
class Car{
    int id;
public:
    Car(string name, string color){
    this->name = name;
    this->color = color;
    }

    // custom copy constructor
    Car(Car &original){
        name = original.name; // copy only name 
    }
    // properties
    string name;
    string color;

    // Methods
    void start(){
        cout << "Car Started!"<<endl;
    }
    void stop(){
        cout << "Car stoped!"<<endl;
    }
    // Setter
    void setId(int Id){
        id = Id;
    }
    // getter
    void getId(){
        cout<<id<<endl;
    }
   
};
int main(){
    Car c1("maruti 800","while");
    Car c2(c1); // copy Constructor
    cout<<c2.name;
    cout<<c2.color;
  

    return 0;
}