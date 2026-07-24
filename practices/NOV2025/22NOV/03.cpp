#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOf2(int n){
    if(!(n & (n-1))){
        return true;
    }
    else{ 
        return false;
    }
}
int main(){
    int n = 1;    
    isPowerOf2(n)?cout<<n<<" power of 2!" : cout<<n<<" not Power of 2!";
    return 0;
} 
