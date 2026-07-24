// clear last i bit
#include<iostream>
#include<math.h>
using namespace std;
int clearLastIBit(int n , int i){
    int bitmask = (~0) << i;
    n = n & bitmask;
    return n;
}
int main(){
    int n = 15;
    int i=2;

    cout<< clearLastIBit(n,i);
    return 0;
} 
