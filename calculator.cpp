#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    cout<<"Enter First number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"Choose your operation from ('+' , '-' , '*' , '/')"<<endl;
    char ch;
    cin>>ch;
    switch(ch)
    {
    case '+':
        cout<<"Sum of given numbers="<<num1+num2<<endl;
        break;
    case '-':
        if(num1>num2){
            cout<<"Difference of given numbers="<<num1-num2<<endl;
        }
        else{
            cout<<"Difference of given numbers="<<num2-num1<<endl;
        }
        break;
    case '*':
        cout<<"product of given numbers="<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Division of given numbers="<<num1/num2<<endl;
        break;
    default:
        cout<<"You have entered invalid operator.... try again";
        break;

    }

    return 0;
}