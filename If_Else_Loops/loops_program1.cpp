// sum of natural number till n
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any natuiral number: ";
    cin>>number;
    int sum=0;

    //using for loop
    for (int i = 1; i <=number; i++)
    {
        sum=sum+i;
    }

    // using while loop
    // int i=0;
    // while (i<=number)
    // {
    //     sum+=i;
    //     i++;
    // }
    

    // Other efficient way to find sum of natural number
    // sum=number*(number+1)/2;
    cout<<"Sum of natural number till given number="<<sum<<endl;
    

    return 0;
}