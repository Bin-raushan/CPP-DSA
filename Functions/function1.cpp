//  Write a program to add 2 numbers using functions
#include<iostream>
using namespace std;
void greeting(){
    cout<<"Welcome to our server"<<endl;
}
int sum(int a,int b) // function declaration/prototype
{
    int sum;
    sum=a+b;        // body of the function/ functio definition
    return sum;    
}
int main(){
    greeting();
    int num1,num2;
    cout<<"Enter the value of num1 and num2 : ";
    cin>>num1>>num2;
    
    cout<<num1<<"+"<<num2<<"="<<sum(num1,num2); // function call
    return 0;
}