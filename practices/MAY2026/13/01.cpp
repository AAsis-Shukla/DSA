
// program to sort an array with quick sort algorithm
#include<iostream>
using namespace std;

int partition(int* arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<high;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int* arr, int low, int high){
    if(low < high){
        int pivotIndex = partition(arr,low,high);

        quickSort(arr,low,pivotIndex-1);

        quickSort(arr,pivotIndex+1, high);
    }
}
void printArr(int* arr, int n){
    for(int i = 0; i<n;i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {8,0,1,9,4,2,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}