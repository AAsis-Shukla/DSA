#include<iostream>
using namespace std;
void printSquare(int n) {
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=0 && j!=0 && i!=(n-1) && j!=(n-1)){
            cout<<" ";
            continue;            
        }
        cout<<"*";
    }
    cout<<endl;
    }
}
void rightAngleTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==j || i==(n-1)){
                cout<<"* ";
                continue;            
            }
            cout<<"  ";
        }
    cout<<endl;
    }
}
int main(){
    rightAngleTriangle(4);
    return 0;
}