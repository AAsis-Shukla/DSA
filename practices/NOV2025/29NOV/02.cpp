#include<iostream>
#include<vector>
using namespace std;
int tilingProblem(int n){   //2 * n
    if(n ==0 || n == 1){
        return 1;
    }
    return tilingProblem(n-1) + tilingProblem(n-2);
}
int main(){
    cout<<tilingProblem(3);
    
    return 0;
}