#include<iostream>
#include<math.h>
using namespace std;
int getIthBit1(int n, int i){
    int power = pow(2,i);
    if((n&power)){
        return 1;
    }
    else{
        return 0;
    }
}
int getIthBit2(int n, int i){
    int bitmask = 1 << i;
    if((n&bitmask)){
        return 1;
    }
    else{
        return 0;
    }
}
int setIthBit(int n, int i){
    int bitmask = 1 << i;
    return (n | bitmask);
}
int clearIthBit(int n, int i){
    int bitmask = ~(1 << i);
    return (n & bitmask);
}
int main(){
    int n = 11;
    int i=1;
    // cout<<getIthBit1(n,i)<<endl;
    // cout<<getIthBit2(n,i);
    // cout<< setIthBit(n,i);
    cout<< clearIthBit(n,i);
    return 0;
} 
