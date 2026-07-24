// 'string' is a class in c++
#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "hello";
    // cout<<str<<endl;
    // str = "Yellow";
    // cout<<str<<endl;
    // cout<<str[0]<<endl;

    string newStr;
    getline(cin,newStr,'*');
    cout<<newStr;
    return 0;
}