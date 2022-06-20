// Write a program to check if a given number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    int i;
    cout<<"Enter any number for checking: ";
    cin>>number;
    for(i=2;i<(number);i++){ // smallest prime number is 2
        if(number%i==0){
            cout<<number<<" is a Non Prime number";
            break;
        }
    }
    if(i==number){
        cout<<number<<" is a Prime number";
    }
    else if(number<=1){
        cout<<"Smallest Prime number is 2 please Enter valid number...";
    }
    

    return 0;
}






//Other method to check prime or not

// int main(){
//     int number;
//     bool prime=1;
//     cout<<"Enter any number: ";
//     cin>>number;
//     int i;
//     for(i=2;i<=sqrt(number);i++){
//         if(number%i==0){
//             prime=0;
//             break;
//         }
//     }
//     if (number<=1)
//     {
//         prime=0;
//     }
//     if(prime){
//         cout<<"prime number";
//     }
//     else{
//         cout<<"non prime number";
//     }
    
//     return 0;
// }
