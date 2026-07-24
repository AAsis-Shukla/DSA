#include<iostream>
using namespace std;
int main(){
    int a = 10;
    float b = 2.21;
    int *ptr = &a;
    float *ptr2 = &b;

    int **ptr3 = &ptr;

    // cout<<"value of a ="<<a<<endl<<"address of a = "<<ptr<<endl;
    // cout<<"value of b ="<<b<<endl<<"address of b = "<<ptr2;
    // cout<<&a <<" = "<<ptr<<endl;
    // cout<<&b <<" = "<<ptr2;
    // cout<<sizeof (ptr2)<<endl;
    // cout<<sizeof (&ptr2);

    cout<<&ptr <<" = "<<*ptr3;
    return 0;
}