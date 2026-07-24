#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>vec){
    // for(int i = 0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    for(int x : vec){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> age = {90,12,43,55,23};
    // age.push_front(11);
    // age.push_front(77);
    age.push_back(9);
    printVector(age);
    return 0;
}