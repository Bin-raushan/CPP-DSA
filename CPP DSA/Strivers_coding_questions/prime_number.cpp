#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    int i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
   
}


int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Non Prime Number";
    }

    return 0;
}