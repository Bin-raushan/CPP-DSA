#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int last_digit;
    cout<<"Reverse of "<<num<<"=";
    while(num>0){
        last_digit=num%10;
        cout<<last_digit;
        num/=10;

    }
    return 0;
}