// Draw the pattern :
/* 
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row :";
    cin >>n; // Enter 4 for above pattern
    for(int i=0;i<n;i++){
        // space : n-i-1
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // num1 : i+1
        for (int j=1;j<=i+1;j++){
            cout<<j;
        }
        // num2
        for(int j=1;j>0;j--){
            cout<<j;
        }
        
        cout<<endl;
    }
    return 0;
}