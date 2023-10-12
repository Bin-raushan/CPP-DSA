#include<iostream>
using namespace std;
int main(){
    int number,rem,sum=0;
    cout<<"Enter any number: ";
    cin>>number;
    while(number>0){
        rem=number%10;
        sum=sum+rem;
        number=number/10;
    } 
    cout<<"Sum of given number="<<sum;
    return 0;
}