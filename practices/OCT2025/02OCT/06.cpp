// Draw the pattern :
/* 
    1
    2 1 
    3 2 1
    4 3 2 1
AND
    1
    2 3
    4 5 6
    7 8 9 10
AND
    A
    B C
    D E F
    G H I J
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of colum/row :";
    cin >>n; // Enter 4 for above pattern
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}