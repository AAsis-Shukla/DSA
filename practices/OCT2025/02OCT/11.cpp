#include<iostream>
using namespace std;

// function to sum two number
int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

// function to calculate factorial of given number
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

// to sum of digits of a given number
int digitSum(int n){
    int sum=0;
    for(;n>=1;n/=10){
        sum+=(n%10);
    }
    return sum;
}

// to calculate binomial coeficient (nCr)
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    cout<<nCr(5,3);
    return 0;
}