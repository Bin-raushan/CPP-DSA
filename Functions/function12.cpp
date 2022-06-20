// sum of first n natural number using function
#include<iostream>
using namespace std;
int sum_of_natural(int num){
    int sum=0;
    int i;
    for ( i = 1; i <=num; i++)
    {
        
        sum=sum+i;
    }

    // or we can do it by sum=num*(num+1)/2

    return sum;    
}

int main(){
    int number;
    cout<<"Enter any natural number: ";
    cin>>number;
    cout<<"Sum of first n natural number=";
    cout<<sum_of_natural(number);
    return 0;
}