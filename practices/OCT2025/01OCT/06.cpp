// WAP in c++ to check either the entered character is capital or small alphabet or not an alphabet.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;
    if(ch>=65 && ch <=90){
        cout<<ch<<" is a Capital Alphabet.";
    }
    else if(ch>=97 && ch <=122){
        cout<<ch<<" is a Small Alphabet.";
    }
    else{
        cout<<ch<<" is not an Alphabet.";
    }
    return 0;
}