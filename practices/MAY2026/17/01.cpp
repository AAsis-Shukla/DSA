// to calculate factorial

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    cout<<factorial(-1)<<endl;
    return 0;
}