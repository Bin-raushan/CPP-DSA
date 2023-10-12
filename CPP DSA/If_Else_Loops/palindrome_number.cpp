// write a program to check whether a number is palindrome or not
// Ex= 131,111 number after reverse of digit is same
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number for checking: ";
    cin>>number;
    int original_number=number;
    int reverse=0;
    while(number>0){
        int last_digit=number%10;
        reverse=reverse*10+last_digit;
        number=number/10;
        
    }
    if(reverse==original_number){
        cout<<original_number<<" is a palindrome number.";
    }
    else{
        cout<<original_number<<" is not a palindrome number.";
    }
    return 0;
}