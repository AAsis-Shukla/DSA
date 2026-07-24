#include<iostream>
#include<math.h>
using namespace std;
int fastExpo(int x, int n){
    int ans = 1;
    while(n>0){
        int lastBit = n & 1;
        if(lastBit){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }
    return ans;
}
int main(){
    int x = 5;
    int n = 2;
    
    cout<< fastExpo(x,n);
    return 0;
} 
