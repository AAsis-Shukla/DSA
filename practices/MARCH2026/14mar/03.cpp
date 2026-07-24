// find and print all permutation of string.
#include<iostream>
#include<string>
using namespace std;
void permutationStr(string str, string ans){
    int n = str.size();
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        char ch = str[i];
        string nextStr = str.substr(0,i) + str.substr(i+1, n -(i+1));
        permutationStr(nextStr,ans+ch);
    }
}
int main(){
    string str = "abc";
    string ans = "";
    permutationStr(str,ans);
    // cout<<str.substr(0,0);
    return 0;
}