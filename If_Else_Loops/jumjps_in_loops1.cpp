// Write a program to print all odd number till n;
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        if(i%2==0){
            continue;
        }
         cout<<i<<" ";
        
    }
    return 0;
}