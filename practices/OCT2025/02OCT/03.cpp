// Draw the pattern :
/*  
    *
    **
    ***
    ****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Row : ";
    cin>>n; //Enter 4 for the above pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}