#include<iostream>
using namespace std;
int strToInt(string str){
    int num = 0;
    for(char ch : str){
        num = (num * 10) + (int)ch - '0';
    }
    return num * 2;
}
int main(){
    cout<<strToInt("12");
    return 0;
}