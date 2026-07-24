#include<iostream>
using namespace std;
// function to print max sub array sum 
// time complexity = O(n)
// Kadane's algorithm
void maxSubArraySum(int *arr,int n){
    int maxSum=INT16_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<" Max SubArray Sum = "<<maxSum;
}
int main(){
    int arr[]={-8,-1,-67,-10};
    // int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum(arr,n);
    return 0;
}