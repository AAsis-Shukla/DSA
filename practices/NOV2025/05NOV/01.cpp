// Traping Rainwater
#include<iostream>
using namespace std;
int trapedRainWater(int *height,int n){
    int leftLargest,rightLargest,trapedWater=0;
    for(int i=0;i<n-1;i++){
        leftLargest=height[0];
        for(int j=0;j<i;j++){
            leftLargest=max(height[j],leftLargest);
        }
        rightLargest=height[i+1];
        for(int j=i+1;j<n;j++){
            rightLargest=max(rightLargest,height[j]);
        }
        if(leftLargest>height[i] && rightLargest>height[i]){
            trapedWater+=(min(leftLargest,rightLargest)-height[i]);
        }
    }
    return trapedWater;
}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    cout<<"Traped Water = "<<trapedRainWater(height,n)<<endl;
    return 0;
}