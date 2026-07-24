#include<iostream>
using namespace std;
bool isVowel( char c){
    if(!isalpha(c)){
        return 0;
    }
    string vowel = "aeiouAEIOU";
    if(vowel.find(c)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    cout<<isVowel('a')<<endl;
    cout<<isVowel('t')<<endl;
    return 0;
}