//maximum among two number
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    int max,min;
    cout<<"Enter two numbers for compare: ";
    cin>>num1>>num2;
    if (num1>num2)
    {
        max=num1;
        min=num2;
    }
    else
    {
        max=num2;
        min=num1;
    }
    
    cout<<max<<" is maximum number"<<endl;
    cout<<min<<" is minimum number";
    
    
    return 0;
}