#include<iostream>
using namespace std;
// Fuction to convert decmal to binary
long long int decToBinary(int decNum){
    long long int binNum=0;
    for (long long int pow=1;decNum>=1;decNum/=2){
        binNum+=((decNum%2)*pow);
        pow*=10;
    }
    return binNum;
}

// Binary to Decimal
int binToDecimal(long long int binNum){
    int decNum=0;
    for(int pow=1;binNum>=1;binNum/=10){
        decNum+=((binNum%10)*pow);
        pow*=2;
    }
    return decNum;
}

int main(){
    cout<<decToBinary(2088)<<endl;
    cout<<binToDecimal(100000101000);
    return 0;
}