// to find largest element of an array.
#include<iostream>
using namespace std;
int largest(int *arr,int len){
    int largest = *arr;
    for(int i=0;i<len;i++){
        if(*(arr+i) > largest){
            largest = *(arr+i);
        }
    }
    return largest;
}
int main(){
    int arr[]={12,89,56,1,90,16,17,36,2};
    int len = sizeof(arr)/sizeof(int);
    cout<<"largest = "<<largest(arr,len)<<endl;
    return 0;
}