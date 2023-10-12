//Write a program to check whether a number is armstrong or not
// EX:- 153=1^3+5^3+3^3 this is an armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number for checking: ";
    cin>>number;
    int temp=number;
    int rem,sum=0;
    while(number!=0){
        rem=number%10;
        sum=sum+pow(rem,3);
        number/=10;
    }
    if(temp==sum){
        cout<<temp<<" is an armstrong number";
    }
    else{
        cout<<temp<<" is not an armstrong number";
    }


    return 0;
}