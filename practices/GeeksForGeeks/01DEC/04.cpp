#include<iostream>
#include<math.h>

using namespace std;
class Solution {
  public:
    int binaryToDecimal(string b) {
        // Code here.
        int dec=0;
        for(int i=b.length()-1;i>=0;i--){
            int digit = (int)b[i] - '0';
            dec += digit*pow(2,b.length()-(i+1));
        }
        return dec;
    }
};
int main(){
    Solution s1;
    cout<<s1.binaryToDecimal("101");
    return 0;
}