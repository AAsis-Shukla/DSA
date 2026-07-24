// count set bit
#include<iostream>
#include<math.h>
using namespace std;
int countSetBit(int n){
    int count = 0;
    while(n>0){
        int lastBit = (n & 1);
        count += lastBit;
        n = n >> 1;
    }
    return count;
}
int main(){
    int n = 10;    
    cout<<countSetBit(n) ;
    return 0;
} 
