#include<iostream>
#include<vector>
using namespace std;
void printNatural(int n){
    cout<<n<<" ";
    if(n==1){
        return;
    }
    else{
        printNatural(n-1);
    }
}
int sumOfN(int n){
    if(n==1){
        return 1;
    }
    return n + sumOfN(n-1);
}
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
// isSorted(arr,size,0) while calling
bool isSorted(int *arr, int n, int i){
    if(n==1){{
        return true;
    }
    }
    if(*(arr + i) > *(arr + i +  1)){
        return false;
    }
    return isSorted(arr,n-1,i+1);
}
// firstOccurance(vector,0,key) while calling
int firstOccurance(vector<int> vec, int i, int key){
    if(i == vec.size()){
        return -1;
    }
    if(vec.at(i) == key){
        return i;
    }
    return firstOccurance(vec,i+1,key);
}
int lastOccurance(vector<int> vec, int key, int i){
    if(i == vec.size()){
        return -1;
    }
    int idxFound = lastOccurance(vec,key,i+1);
    if(idxFound == -1 && vec[i] == key){
        return i;
    }
    return idxFound;
}
int power(int x, int n){
    if(n == 0){
        return 1;
    }
    int halfpower = power(x,n/2);
    if(n%2==0){
        return halfpower * halfpower;
    }else{
        return x * halfpower * halfpower;
    }
}
int main(){
    // vector <int> container ={1,2,4,2,3,4,3,1,1,6};
    // cout<<firstOccurance(container,0,7);
    cout<<power(5,4);
    return 0;
}