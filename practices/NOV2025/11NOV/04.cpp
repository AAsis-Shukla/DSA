// reverse a string
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char word[],int n){
    int st=0,en=n-1;
    while(st<en){
        swap(word[st],word[en]);
        st++;
        en--;
    }
}
int main(){
    char word[]="ashish";
    reverse(word,strlen(word));
    cout<<word;
    return 0;
}