// sum of diagonal element's sum of a matrix
#include<iostream>
using namespace std;
// O(n*n)
void sumDaigonal1(int matrix[][4],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
    
        for(int j=0;j<m;j++){
            if(i==j){
                sum+=matrix[i][j];
            }
            else if(j==n-(i+1)){
                sum+=matrix[i][j];
        }
    }
}
    cout<<"sum of diagonal = "<<sum;
}
// O(n)
void sumDaigonal2(int matrix[][4],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
        if(i != n-(i+1)){
            sum+=matrix[i][n-(i+1)];
        }
    }
    cout<<"sum of diagonal = "<<sum;
}
int main(){
    int matrix[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14,15,16}
    };
    
    sumDaigonal2(matrix, 4,4);
    return 0;
}