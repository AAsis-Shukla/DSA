// function of binary Search

#include<iostream>
using namespace std;
// first method
int binSearch(int *arr, int n,int key){
    int first = 0,last = n-1;
    while(first<=last){
        int mid =(first+last)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            first=mid+1;
        }else{
            last=mid-1;
        }
    }
    return -1;
}

// second method
// int binSearch(int *arr, int n,int key){
//     int first = 0;
//     int last = n-1;
//     int mid = (first+last)/2;
//     for (int i=0;i<n;i++){
//        if(key>=arr[mid]){
//             if(key==arr[mid]){
//                 return mid;
//             }
//             else if(key==arr[last]){
//                 return last;
//             }
//             else{
//                 first = mid+1;
//                 last -= 1;
//                 mid = (first+last)/2;
//             }
//        }
//        else{
//            if(key == arr[first]){
//                 return first;
//            }
//            else{
//             last = mid - 1;
//             first+=1;
//             mid = (first+last)/2;
//            }
//        }
//     }
//     return -1;
// }
int main(){
    int arr[]={6,7,8,9,10,11,12,13,14,15};
    int len = sizeof(arr)/sizeof(int);
    int key = 7;
    cout<<binSearch(arr,len,key)<<endl;
    return 0;
}