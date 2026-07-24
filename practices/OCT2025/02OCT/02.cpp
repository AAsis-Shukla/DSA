// Draw the pattern :
    /*  123
        456
        789
    OR
        ABC
        DEF
        GHI
*/
#include<iostream>
using namespace std;
int main(){
    int num=1,n;
    cout<<"Enter number of colum/row :";
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    return 0;
}