#include<iostream>
#include<string.h>
using namespace std;
 bool isPalindrome(char word[],int n){
    int st=0,en=n-1;
    while(st<en){
        if(word[st] != word[en]){
            cout<<"Not Palindrome!";
            return false;
        }
    }
    cout<<"Palindrome!";
   return true;
}
int main(){
    char word[] ="racecar";
    isPalindrome(word,strlen(word));
}