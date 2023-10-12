//maximum among 3 numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three numbers for compare: ";
    cin>>num1>>num2>>num3;
    if (num1>num2)
    {
        if (num1>num3)
        {
            cout<<num1<<" is maximum"<<endl;
        }
        else
        {
            cout<<num3<<" is maxiumum"<<endl;
        }
        
    }
    else 
    {
        if (num2>num3)
        {
            cout<<num2<<" is maximum"<<endl;
        }
        else
        {
            cout<<num3<<" is maximum"<<endl;
        }
        
        
    }
    
    
     return 0;
 }

// other way to find maximum of two number:
// #include<iostream>
// using namespace std;
// int main(){
// int num1,num2,num3;
// cin>>num1>>num2>>num3;
// if (num1>num2 && num1>num3)
// {
//     cout<<num1;
// }
// else if(num2>num1 && num2>num3)
// {
//     cout<<num2;
// }
// else
// {
//     cout<<num3;
// }
//  return 0;
// }