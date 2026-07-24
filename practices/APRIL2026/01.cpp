#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<isPrime(15)<<endl;
    return 0;
}

// 5   11  17  23  29  35  41  47  53  59  65  61  67  73  79  85
