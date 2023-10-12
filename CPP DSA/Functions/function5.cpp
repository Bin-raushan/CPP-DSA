// Write a program to find the factorial of a given number.
#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    cout<<factorial(number);
    return 0;
}