// Draw the pattern :
/* 
            *
          *   *
        *       *
       *          *
        *        *
          *    *
             *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of colum/row :";
    cin >>n; // Enter 4 for above pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}