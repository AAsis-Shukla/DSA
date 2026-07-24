/*
    tiling problem
    count total ways to tile a floor (2 * n) with tiles (2 * 1)
*/
#include<iostream>
using namespace std;
/*
    this function will return number of way to arrange the tile(2 * 1) to fill the floor (2 * n)
*/
// for (2 * 3) floor with tile (2 * 1): number of ways will be 3
int tp(int n){
    if(n==0 || n==1)
        return 1;
    return tp(n-1) + tp(n-2);
}
int main(){
    cout<<tp(3)<<endl;  //floor size (2 * 3)
    cout<<tp(1)<<endl;  //floor size (2 * 1)
    cout<<tp(0)<<endl;  //floor size (2 * 0)
    cout<<tp(4)<<endl;  //floor size (2 * 4)
    return 0;
}
