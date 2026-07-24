#include<iostream>
using namespace std;
void printArr(int num[],int n){
    
    for(int i=0;i<n;i++){
        cout<<*(num + i)<<endl;
    }
}
int main(){
    int arr[]={1,3,4,2,6};
    // cout<<arr<<endl;
    int len = sizeof(arr)/sizeof(int);
    printArr(arr,len);
    return 0;
}