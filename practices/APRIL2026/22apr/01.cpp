#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    // code here
    *a += *b;id type argument of unary ‘*’ (have ‘int’)
    5 |     *a += *b;
      |     ^~
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a = 10, b = 20;
    swap(&a, & b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}