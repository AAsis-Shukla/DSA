#include<iostream>
using namespace std;
// function to print max sub array sum 
// time complexity = O(n_square)
void maxSubArraySum(int *arr,int n){
    int maxSum=INT16_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
            cout<<currSum<<", ";
        }
        cout<<endl;
    }
    cout<<"Max SubArray Sum = "<<maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum(arr,n);
    return 0;
}