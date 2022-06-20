// Write a program to print all prime numbers between 2 to given numbers.
#include<iostream>
using namespace std;
#include<cmath>

bool prime_numbers(int num); // Decalaration of function

int main() // Execution of code start from main function
{
    int number1,number2;
    cout<<"Enter the Range of number in between prime numbers you want to print: ";
    cin>>number1>>number2;
    for(int i=number1;i<=number2;i++){
        if(prime_numbers(i)){
            cout<<i<<" ";
        }
    }
    return 0;

}

bool prime_numbers(int n){
   int i;
   for(i=2;i<=sqrt(n);i++){
       if(n%i==0){
           return false;
           break;
       }
   }
   
    return true;
} 