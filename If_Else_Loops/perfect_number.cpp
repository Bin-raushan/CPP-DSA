// Write a program to check whether a number is perfect or not
// perfect number=sum of it's divisors Ex- 6=1+2+3
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number4 for checking: ";
    cin>>number;
    int temp=number;
    int sum=0;
    int i;
    for(i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    if (temp==sum)
    {
        cout<<"Perfect number";
    }
    else{
        cout<<"not a perfect number";
    }
    
    return 0;
}