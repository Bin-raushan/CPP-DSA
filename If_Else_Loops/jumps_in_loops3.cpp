// Write a program to print all prime number in a given range
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    int i,j;
    cout<<"Enter the value of num1 and num2: ";
    cin>>num1>>num2;
    for(i=num1;i<num2;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<j<<" ";
        }
    }
    return 0;
}