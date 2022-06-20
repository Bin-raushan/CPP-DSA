//  Write a program to print Fibonacci sequence.

#include<iostream>
using namespace std;
int fibo(int num){
    if(num<=1){
        return num;

    }
    else{
        int first=0;
        int last=1;
        int next;
        cout<<first<<" "<<last<<" ";
        for(int i=3;i<=num;i++){
            next=first+last;
            cout<<next<<" ";
            first=last;
            last=next;

        }

    }
}
int main(){
    int number;
    cout<<"Enter number as far you want to print series: ";
    cin>>number;
    fibo(number);


    return 0;
}
