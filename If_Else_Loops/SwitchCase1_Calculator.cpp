// Program for simple Calculator
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num1;
    cout<<"Enter first operand: ";
    cin>>num1;
    char ch;
    cout<<"Enter any operator among ('+', '-', '*', '/'): ";
    cin>>ch;
    float num2;
    cout<<"Enter second operand: ";
    cin>>num2;
    switch (ch)
    {
    case '+':
        cout<<"Sum of given number="<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Subtraction of given number="<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Multiplication of given number="<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Division of given number="<<num1/num2<<endl;
        break;
    default:
        cout<<"You have entered invalid operators! Try again...";
        break;
    }


    return 0;
}