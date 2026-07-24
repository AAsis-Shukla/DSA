// function of linear Searching .
#include<iostream>
using namespace std;
int linearSearch(int *list, int n, int key){
    for(int i=0;i<n;i++){
        if(*(list+i) == key){
           return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,4,3,7,89,8,12,90,2,77,32,11};
    int len = sizeof(arr)/sizeof(int);
    int key = 7;
    cout<<key<<" is found at index : "<<linearSearch(arr,len,key);
    return 0;
}