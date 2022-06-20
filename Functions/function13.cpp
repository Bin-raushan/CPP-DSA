// check pythagorian triplet using function

#include<iostream>
#include<cmath>
using namespace std;

bool pythagorian(int a, int b, int c){
    int x=max(a,(max(b,c)));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=b;
        z=a;
    }
    if(pow(x,2)==pow(y,2)+pow(z,2)){
        return true;
    }
    return false;

}
int main(){
    int num1,num2,num3;
    cout<<"Enter numbers for checking pythagorian triplet: ";
    cin>>num1>>num2>>num3;
    if(pythagorian(num1,num2,num3)){
        cout<<"YES! It is Pytagorian Triplet";
    }
    else{
        cout<<"Sorry! It's not a pythagorian Triplet ";
    }

    return 0;
}