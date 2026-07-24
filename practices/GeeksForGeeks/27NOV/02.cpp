#include<iostream>
using namespace std;
int upTo(int n){
    int res = 0;
    for(int i = 1;i<=n;i++){
        res ^= i;
        if(res == n){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    for(int i=1; i<= upTo(n);i++){
        cout<<i<<" ";
    }

    return 0;
}