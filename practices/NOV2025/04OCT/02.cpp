#include<iostream>
using namespace std;

// To Reverse the number
int revNum(int num){
    int rev=0;
    for(;num>=1;num/=10){
        rev = (rev*10)+(num%10);
    }
    return rev;
}

// Palindrome or Not.
bool isPalindrome(int num){
    if(num==revNum(num)){
        return true;
    }
    else{
        return false;
    }
}

// Sum of Digit
int sumOfDigit(int num){
    int sum=0;
    for(;num>=1;num/=10){
        sum+=(num%10);
    }
    return sum;
}

// Calculate a^2 + b^2 + 2ab
int sos(int a, int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    cout<<"digit sum ="<<sumOfDigit(4343)<<endl;
    cout<<(isPalindrome(4343)?"Palindrome":"Not Palindrome")<<endl;
    cout<<sos(4,2);
    return 0;
}