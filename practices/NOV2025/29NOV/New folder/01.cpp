// setter and getter
#include<iostream>
using namespace std;
class Car {
    private:
        int chNo;
    public:
        // setter
        void setCh(int n){
            chNo = n;   
        }
        // getter
        int getCh(){
            return chNo;
        }

};
int main(){
    Car car1;
    // car1.chNo=12345;
    car1.setCh(12345);

    // cout<<car1.chNo<<endl;
    cout<<car1.getCh()<<endl;
    
    return 0;
}