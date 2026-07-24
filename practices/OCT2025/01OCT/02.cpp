// to check whether is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = false;
    cout << "Enter a Number :";
    cin>>n;
    for(int i=2;i<n;i+=1){
        if(n%i==0){
            isPrime = true;
            break;
        }
    }
    if(isPrime == false)
    cout << n <<" is a Prime number.";
    else
    cout << n <<" is Not a Prime Number.";
    return 0;
}


