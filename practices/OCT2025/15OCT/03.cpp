#include<iostream>
using namespace std;

// first method to reverse an array
// int reverse1(int *arr,int n){
//     int rev[n];
//     for(int i=0;i<n;i++){
//         rev[i]=arr[n-(i+1)];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=rev[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// second method to reverse an array  
void reverse2(int *arr, int n){
    for(int i=0;i<n/2;i++){
        int j = n-(i+1);
        arr[i]+=arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        // swap(arr[i],arr[j]);  // inbuilt function in c++ to swap
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(int);
    // reverse1(arr,len);
    reverse2(arr,len);
    
    return 0;
}