//Write a program to display all factors of a number. 
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    cout<<"Factors of "<<number<<" = ";
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}