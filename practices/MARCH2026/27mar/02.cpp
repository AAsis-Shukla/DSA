#include<iostream>
#include<string>
using namespace std;

// returns last digit of an integer.
int lastDigit(int n){
    return n%10;
}

// returns number of digit of an integer
int numOfDigit(int n){
    static int count = 0;
    if(n<=0){
        return count;
    }
    count ++;
    return numOfDigit(n/10);
}

int main(){
    
   
    return 0;
}