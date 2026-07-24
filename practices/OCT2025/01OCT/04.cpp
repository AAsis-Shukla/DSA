#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter you age :";
    cin>>age;
    if(age>=18){
        cout<<"eligible for vote!";
    }
    else{
        cout<<"not eligible for vote!";
    }
    return 0;
}