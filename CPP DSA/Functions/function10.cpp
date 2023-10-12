// Write a program to find out whether a given character is an alphabet or not
// using function
#include<iostream>
using namespace std;
void alphabet_check(char ch){
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        cout<<"This is an alphabet.";
    }
    else{
        cout<<"This not an alphabet.";
    }
}
int main(){
char chracter;
cout<<"Enter any chracter: ";
cin>>chracter;
alphabet_check(chracter);
    return 0;
}
