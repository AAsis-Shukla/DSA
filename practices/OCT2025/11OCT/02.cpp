// Linear search
#include<iostream>
using namespace std;
int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i+=1){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,90,12,1,9,5,7};
    int len = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,len,57)<<endl;
    return 0;
}