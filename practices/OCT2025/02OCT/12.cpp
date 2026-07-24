/*
 WAF to check if a number is prime or not.
 WAF to print all prime number from 2 to N
 WAF to print nth fibonacci
*/
#include<iostream>
using namespace std;
// Function to check if a number is prime or not
bool isPrime(int n){
    bool is_prime = true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime = false;
            break;
        }  
    }
    return is_prime;
}
// To sum Prime from 2 to N
int sumPrime(int n){
    int sum = 0;
    for(int i=2;i<=n;i++){
        if (isPrime(i) == true){
            sum +=i;
        }
    }
    return sum;
}
int main(){
    // cout<<(isPrime(12)?"Prime":"Not Prime");

    cout<<sumPrime(20);

    return 0;
}