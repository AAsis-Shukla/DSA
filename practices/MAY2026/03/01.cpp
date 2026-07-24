#include<iostream>
using namespace std;
#include<list>
#include<iterator>
void printList(list<int> ll){
    list<int> :: iterator itr;
    for(itr = ll.begin(); itr != ll.end();itr++){
        cout<<(*itr)<<" - > ";
    }
    cout<<"NULL"<<endl;
}
int main(){
    list<int> ll;
    ll.push_front(12);
    ll.push_front(10);
    ll.push_front(8);
    ll.push_back(15);
    printList(ll);
    return 0;
}