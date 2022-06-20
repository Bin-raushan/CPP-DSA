#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number more than equal to two digits: ";
    cin>>number;
    int reverse=0,remainder;
    while(number>0){
    remainder=number%10;
    reverse=reverse*10+remainder;
    number=number/10; 
    }
    cout<<"Reverse of given number="<<reverse; 
    return 0;
}