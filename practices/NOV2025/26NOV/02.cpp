#include<iostream>
using namespace std;
class Atm{
    private:
        int balance;
        int pin = 12345;
        bool isPin(int pin ){
            return this->pin == pin;
        }
    public:
        Atm(){
            balance = 5000;
        }
        void withdrawCash(int pin, int amount) {
            if(!isPin(pin)){
                cout<<"Incorrect Pin! \n\t\t Try again later....";
                return ;
            }
            if(amount>balance){
                cout<<"insufficient balance!....";
                return;
            }
            balance -= amount;
            cout<<"Cash withdrawn!\n\t\tRemaining balance :"<<balance;
        }
        int getbalance(){
            return balance;
        }
        int getPin(){
            return pin;
        }
};
int main(){
    Atm aman;
    aman.withdrawCash(12345,4000);
    aman.getPin();
    return 0;
}