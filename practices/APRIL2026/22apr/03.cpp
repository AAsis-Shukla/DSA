#include<iostream>
using namespace std;
int min(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int max(int a , int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int GCD(int a, int b){
    if(max(a,b)%min(a,b) == 0){
        return min(a,b);
    }
    for(int i=2;i<=min(a,b)/2;i++){
        int temp = min(a,b)/i;
        if(max(a,b)% temp == 0) {
            return temp;
        }
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<GCD(a,b)<<endl;
    return 0;
}