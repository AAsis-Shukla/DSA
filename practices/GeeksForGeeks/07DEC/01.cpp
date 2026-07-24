/*
    first digit of a number.
*/
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

// complexity O(number of digit - 1)
int firstDigit(int n){
    if(n<0){
        n = -n;
    }
    // while(n>= 10){
    //     n /= 10;
    // }
    return n/pow(10,(int)log10(n));
}
int main(){
    int a = 10, b = 12;
    string result  = to_string(a) + to_string(b);
    return 0;
}