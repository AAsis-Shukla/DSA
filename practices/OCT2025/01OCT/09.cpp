// Sum of numbers from 1 to n
// sum of odd numbers
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,oddSum=0;
    cout<<"Up to : "  ;
    cin >>n;
    for (int i=1;i<=n;i+=1){
        sum+=i;
        if(i%2!=0){
            oddSum+=i;
        }
    }
    cout<<"allSum = "<<sum<<endl;
    cout<<"oddSum = "<<oddSum;
    return 0;
}