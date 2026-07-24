#include<iostream>
using namespace std;
int main(){
    // int phy,math,che,eng,hindi,total;
    float percentage;
    int total=0,temp;
    // cout<<"Physics : ";
    // cin>>phy;
    // cout<<"chemistry : ";
    // cin>>che;
    // cout<<"Maths : ";
    // cin>>math;
    // cout<<"English : ";
    // cin>>eng;
    // cout<<"Hindi : ";
    // cin>>hindi;
    // total = phy+che+math+eng+hindi;
    // percentage=(float)total/5;

    for (int i=1;i<=5;i++){
        cout<<"Subject"<<i<<" : ";
        cin>>temp;
        total+=temp;
    }
    percentage=(float)total/5;
    
    cout<<"Aggregate = "<<total<<endl;
    cout<<"Percentage = "<<percentage<<endl;
    if(percentage>=90 && percentage<=100)
        cout<<"Grade : A+";
    else if(percentage<90 && percentage>=80)
        cout<<"Grade : A";
    else if(percentage<80 && percentage>=70)
        cout<<"Grade : B";
    else if(percentage<70 && percentage>=60)
        cout<<"Grade : C";
    else if(percentage<60 && percentage>=45)
        cout<<"Grade : D";
    else
        cout<<"Grade : Fail";
    
    
    
    return 0;
}