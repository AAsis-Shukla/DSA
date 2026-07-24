#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<string> cars = {"swift","mustang","toyota","BMW","mercedes","G wagon"};
    // vector's function
    // cout<<cars.front()<<endl;
    // cout<<cars.back()<<endl;
    // cout<<cars.at(3)<<endl;
    // cout<<cars.at(2)<<endl;
    // cars.at(2) = "fortuner";
    // cout<<cars.at(2)<<endl;
    // cars.push_back("Tesla");
    // cout<<cars.back()<<endl;
    // cars.pop_back();
    // cout<<cars.back()<<endl;
    // cout<<cars.size()<<endl;
    // cout<<cars.empty()<<endl;

    // loop vector element
        // for(int i=0;i<cars.size();i+=1){
        //     cout<<cars.at(i)<<" ";
        // }
    // cout<<"\n";
    // // access through foreach
        // for(string car : cars){
        //     cout<<car<<" ";
        // }
    
// assign() function
    // The assign() function clears the contents of a vector and then fills it with data.
        // vector<string> gl = {"balrampur","gonda"};
        // gl.assign(cars.begin(),cars.end());
        // for(string car : gl){
        //     cout<<car<<" ";
        // }
        // Specify a value and the number of times to repeat it
        // gl.assign(4,"balrampur");
        // for(string car : gl){
        //     cout<<car<<" ";
        // }

// Vector Decleration 
    vector <int> v;   // vector with no size
    vector <int> v0(5); // vector with sixe 5
    vector <int> v1(5,10);   // size 5 in which each element is 10;
   
    
    for(int i : v1){
        cout<<i<<" ";
    }
    return 0;
}