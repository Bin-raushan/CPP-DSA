//Distance beetween two points
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,x2,y1,y2;
    cout<<"Enter initial points (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter final points (x2,y2): ";
    cin>>x2>>y2;
    float distance;
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Distance between two points="<<distance;
    return 0;
}