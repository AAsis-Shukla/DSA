// check odd or even using bitwise operation(bit manipulation)
#include<iostream>
using namespace std;
int main(){
    // cout<<(~6);
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(!(n&1)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
