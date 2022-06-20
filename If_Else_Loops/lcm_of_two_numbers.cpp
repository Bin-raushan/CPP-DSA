#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter the value of number1 and number2: ";
    cin>>number1>>number2;
    int lcm=(number1>number2)?number1:number2; // lcm of two number will be greater than both number
    while (true)
    {
        if(lcm%number1==0 && lcm%number2==0){
            cout<<"THe lcm of "<<number1<<" and"<<number2<<" is ="<<lcm;
            break;
        }
        lcm++;
    }
    return 0;
    
    
}