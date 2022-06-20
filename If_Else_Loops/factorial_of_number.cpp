//Write a program to find the factorial of a given number
#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    int i;
    cout<<"Enter any number: ";
    cin>>num;
    for(i=num;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}