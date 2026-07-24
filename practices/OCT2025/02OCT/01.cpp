// Draw the pattern :
/*  1234
    1234
    1234
    1234
    OR
    ****
    ****
    ****
    ****
    OR
    ABCD
    ABCD
    ABCD
    ABCD
*/
#include<iostream>
using namespace std;
int main(){
    // for (int i=1;i<=4;i++){
    //     for (int j=1;j<=4;j++){
    //         // cout<<j<<" ";
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for (int i=1;i<=4;i++){
        for (char j='A';j<='A'+(4-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}