#include<iostream>
using namespace std;
int main(){
    int arr[]={12,90,43,89};
    int lenght = sizeof(arr)/sizeof(int);
    arr[1]=78;
    for(int i=0;i<lenght;i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}