// STL (standard Template Library)
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> ll = {10, 20, 30};
    ll.push_front(5);
    ll.push_back(40);   //5, 10, 20, 30, 40
    // for(int x : ll){
    //     cout<<x<<" ";
    // }
    for(auto i = ll.begin();i != ll.end(); i++){
        cout<<*i<<" ";
    }
    // cout<<*ll.begin()<<endl;
    return 0;
}