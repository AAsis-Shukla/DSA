#include<iostream>
using namespace std;
class Car{
    int id;
public:
    Car(){
        cout<<"A car is Manufactored !"<<endl;
    }
    Car(string name){
        (*this).name = name;
        cout<<"A Car is manufactored which name is "<<this->name <<endl;
    }   // (*this).name is same as this->name
    Car(string name, string color){
        this->name = name;
        this->color = color;
        cout<<"A Car is manufactored which name is "<<this->name << " and color is "<<this->color<<"!"<<endl;
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
    // Car c1("maruti 800","while");
    Car c2("fortuner!");
    cout<<c2.name;
    // Car c3;

    return 0;
}