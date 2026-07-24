// Draw the pattern :
/* 
    1 1 1 1
      2 2 2
        3 3
          4
AND(hw)
    A A A A
      B B B
        C C
          D
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of colum/row :";
    cin >>n; // Enter 4 for above pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j<i){
                cout<<"  ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}