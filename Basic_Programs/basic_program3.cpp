// conversion of temperature in celsius into fahrenheit
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float celsius,fahrenheit;
    cout<<"Enter tempertaure in celsius: ";
    cin>>celsius;
    fahrenheit=(celsius*9/5)+32;
    cout<<"Temperature in farenheit="<<fahrenheit<<" F"<<endl;
    return 0;
}