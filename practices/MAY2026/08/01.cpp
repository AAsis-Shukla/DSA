#include<iostream>
using namespace std;
float div1(int a, int b){
    try{
        a/=b;
        throw 101;
        return a;
    }catch(int errorCode){
        cout<<"Result :" <<errorCode<<endl;
    }
}
int main(){
    cout<<div1(36,0)<<endl;
    return 0;
}