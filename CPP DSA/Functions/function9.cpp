// Write a program with two functions to print the maximum and the
// minimum number respectively among three numbers entered by user.

#include<iostream>
using namespace std;
int max_min(int num1,int num2,int num3){
    int max;
    int min;
    if (num1>num2)
    {
        if (num1>num3)
        {
            max=num1;
            min=num3;
        
        }
        else{
            max=num3;
            min=num2;
        }
    }
    else{
        if (num2>num3)
        {
            min=num3;
            max=num2;
        }
        else{
            max=num3;
            min=num1;
        }
    
        
    }
        
        
    
    cout<<"Maximum="<<max<<","<<"Minimum="<<min;
    
}
int main(){
    int number1,number2,number3;
    cout<<"Enter three numbers as number1 number2 number3 respectively: ";
    cin>>number1>>number2>>number3;
    cout<<"Maxium and minimum number among given number is:\n";
    max_min(number1,number2,number3);

    return 0;
}
