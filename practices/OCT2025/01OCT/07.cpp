// check odd and even number using ternary operator.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<(n%2==0?"Even Number":"Odd Number");
    return 0;
}