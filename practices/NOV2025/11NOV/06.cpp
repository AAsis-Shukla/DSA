#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    char str2[100]="ashish kumar";
    strcpy(str,str2);
    cout<<str<<endl;
    strcat(str," shukla");
    cout<<str<<endl;
    cout<<strcmp(str,str2);
    return 0;
}