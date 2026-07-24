#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int>& arr){
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
}

// Partition function
int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high){

    if(low < high){

        // partition index
        int pi = partition(arr, low, high);

        // left half
        quickSort(arr, low, pi - 1);

        // right half
        quickSort(arr, pi + 1, high);
    }
}

int main(){

    vector<int> arr = {5,7,2,6,3,1,9,8};

    quickSort(arr, 0, arr.size() - 1);

    printArr(arr);

    return 0;
}