#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
    }
};

int binToDecimal(int n){
    int dec=0,i=0;
    while(n>0){
        int l = n%10;
        dec += l*pow(2,i);
        i++;
        n/=10;
    }
    return dec;
}
int binToDecimal(string n){
    int dec = 0;
    int p = n.length() - 1;
    for(int i = 0; i < n.length();i++){
        if(n[i] == '1' || n[i] == '0'){
            if(n[i] == '1'){
                dec += pow(2,p);
                p--;
            }
            else{
                p--;
            }
        }
        else{
            return 0;
        }
    }

    return dec;
}
bool isPrime(int n){
    if(n==1){
        return 0;
    }
    else{
        for(int i = 2; i<= n/2; i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    // cout<<binToDecimal("111000110011001001111")<<endl;
    // cout<<binToDecimal(11011)<<endl;
    cout<<isPrime(1)<<endl;
    cout<<isPrime(2)<<endl;
    cout<<isPrime(3)<<endl;
    cout<<isPrime(4)<<endl;

    return 0;
}