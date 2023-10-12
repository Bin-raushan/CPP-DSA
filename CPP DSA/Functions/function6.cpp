// Write a program to find the binary coefficient (nCr)

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
    int n,r;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;
    int binary_coefficient;
    binary_coefficient=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"binary_coefficient="<<binary_coefficient;
    return 0;
}