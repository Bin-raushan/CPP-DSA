//calculation of two numbers
#include<iostream>
using namespace std;
int main(){
    float number1,number2;
    cout<<"Enter the First number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    float sum,subtract,multiply,divide;
    sum=number1+number2;
    subtract=number1-number2;
    multiply=number1*number2;
    divide=number1/number2;
    cout<<"Sum of the numbers="<<sum<<endl;
    cout<<"Subtraction of the numbers="<<subtract<<endl;
    cout<<"Multiplicaion of numbers="<<multiply<<endl;
    cout<<"Division of numbers="<<divide<<endl;
    cout<<"End of the program! Run again for calculation..";
    return 0;
}