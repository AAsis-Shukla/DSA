#include<iostream>
#include<math.h>
using namespace std;
void updateIthBit(int n,int i, int val){
    n = n & ~(1 << i); // clear ith bit
    n = n | (val << i);
    cout << n << endl;
}
int main(){
    updateIthBit(7 , 2, 0);
    updateIthBit(7 , 3, 1);
    return 0;
} 
