#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter any number: ";
    cin>>num;
    bool prime=0;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"Non prime number";
            prime=1;
            break;
        }
    }
    if(prime==0){
        cout<<"Prime number";
    }
    return 0;
}