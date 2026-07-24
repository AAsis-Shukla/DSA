#include<iostream>
using namespace std;
class Animal{
protected:
    int id;
public:
    string color;
    int weight;
    int height;
    void eat(){
        cout<<"eating...";
    }
    void drink(){
        cout<<"drinking...";
    }
    void run(){
        cout<<"running...";
    }
    void breeth(){
        cout<<"breething...";
    }
};
class Fish : protected Animal{
    public:
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return this->id;
        }

};

int main(){
   
    Fish dolphin;
    dolphin.setId(120700);
    cout<<dolphin.getId();
    return 0;
}