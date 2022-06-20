#include<iostream>
using namespace std;
int main(){
    int number1,number2,gcd,i;
    cout<<"Enter the value of numbers: ";
    cin>>number1>>number2;
    for (i = 1; i<number1 && i<number2; i++)
    {
        if(number1%i==0 && number2%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of given numbers is="<<gcd;
    
    return 0;
}