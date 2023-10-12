// Approach:  We can reverse the original number and compare the original with the reversed number.
// If both are the same, the number qualifies as a palindrome number. ex: 121-palindrome, 123-not palindrome

// Note: A palindromic number is a number that remains the same when its digits are reversed.
//OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0;
    int rem;
    while(n>0){
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    if(rev==temp){
        cout<<"palindrome number";
    }
    else{
        cout<<"not a palindrome number";
    }
    return 0;
}