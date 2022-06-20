// write a program to swap to values;
#include<iostream>
using namespace std;


// Swap using call by value
// void swap(int num1,int num2){
//     int temp;
//     temp=num2;
//     num2=num1;
//     num1=temp;
//     cout<<num1<<" "<<num2;

// }
// int main(){
//     int a,b;
//     cout<<"Enter two number for swap: ";
//     cin>>a>>b;
//     cout<<"number after swaping: ";
//     swap(a,b);
    

// }



// swap using call by Reference/ Pointer;

void swap(int* num1,int* num2){
    int temp;
    temp=*num2;
    *num2=*num1;
    *num1=temp;

}
int main(){
    int a,b;
    cout<<"Enter two number for swap: ";
    cin>>a>>b;
    cout<<"number after swaping: ";
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
    

}