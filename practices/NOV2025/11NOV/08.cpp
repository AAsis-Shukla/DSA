// 'string' is a class in c++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ashish kumar";

    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<", ";
    // }

    for(char ch : str){
        cout<<ch<<", ";
    }
    return 0;
}