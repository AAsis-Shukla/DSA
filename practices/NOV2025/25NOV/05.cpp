// polymorphism
#include<iostream>
using namespace std;
class Print{
    public :
    void show(int x){
        cout << " int = "<<x << endl;
    }
    void show(string x){
        cout << " string = "<<x << endl;
    }
};
class Complex{
    int real;
    int img;
    public:
    Complex(int r, int i){
        real = r;
        img = i;
    }
    void showNum(){
        cout<<real<< " + "<<img<< "i"<<endl;
    }

    // operator overloading
    Complex operator + (Complex &obj2){
        int resReal = this->real + obj2.real;
        int resImg = this->img + obj2.img;
        Complex num3(resReal,resImg);
        return num3;
    }
};
int main(){
    // Print obj1;
    // obj1.show(12);
    // obj1.show("ashish");

    Complex num1(2,3);
    Complex num2(3,7);
    num1.showNum();
    num2.showNum();
    Complex sum = num1 + num2;
    cout<<"result = ";
    sum.showNum();
    return 0;
}