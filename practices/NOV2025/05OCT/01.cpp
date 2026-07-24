// implementing fuction overloading.
#include<iostream>
using namespace std;
int sum(int a ,int b){
    return a+b;
}
int sum(int a ,int b,int c){
    return a+b+c;
}
double sum(double a , double b){
    return a+b;
}
int main(){
    cout<<sum(78,12)<<endl;
    cout<<sum(78,12,10)<<endl;
    cout<<sum(78.5,12.9);
    return 0;
}

