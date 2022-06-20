// Write a program to print a given number using functions
#include<iostream>
using namespace std;
void print(int n){
    cout<<"Entered number by the user is = "<<n;
}
int main(){
    int number;
    cout<<"Enter any number you want to print: ";
    cin>>number;
    print(number);
    return 0;
}
