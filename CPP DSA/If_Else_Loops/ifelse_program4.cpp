//program to chech if a triangle is equilateral,isosceles or scalene
#include<iostream>
using namespace std;
int main(){
    int sideA,sideB,sideC;
    cout<<"Enter three sides of triangle: ";
    cin>>sideA>>sideB>>sideC;
    if (sideA==sideB && sideB==sideC)
    {
        cout<<"Equiletral Triangle"<<endl;
    }
    else if(sideA==sideB || sideB==sideC || sideA==sideC)
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else
    {
        cout<<"Scalene Triangle";
    }
    
    
    return 0;
}