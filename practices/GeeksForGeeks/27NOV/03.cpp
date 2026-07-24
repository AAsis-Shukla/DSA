#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> subsetXOR(int n) {
        // code here
        int res = 0;
        int upTo = 0;
        vector<int> arr;
        for(int i = 1;i<=n;i++){
            res ^= i;
            if(res == n){
                upTo = i;
                break;
            }
        }
        if(upTo > 0){
            for(int i = 1; i<=upTo;i++){
                arr.push_back(i);
            }
        }
        else{
            arr.push_back(n);
        }
        return arr;
    }
};
int main(){
    Solution obj;
    for(int x : obj.subsetXOR(2)){
        cout<<x<<" ";
    }
    return 0;
}
