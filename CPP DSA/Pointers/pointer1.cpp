#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=5;
    cout<<"value of num is "<<num<<endl;
    
    // address operator &
    cout<<"Address of num is "<<&num<<endl;

    //pointer: is a special data type which stores the address.

    int *ptr=&num;
    cout<<"Address of num is "<<ptr<<endl;
    cout<<"value at adress pointed by ptr is "<<*ptr<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"address::"<<&ptr<<endl;

    double d=4.33;
    double *p=&d;
    cout<<p<<" "<<*p<<endl;
    cout<<"Size of d is "<<sizeof(p)<<endl;


    int *p1; // bad practice, 
    //pointer to int is created and pointing to some garbage value
    int *p2=0; // null pointer, good practice when we don't have idea where our pinter have to point
    //cout<<p2 will give segmentation fault

    int num1=10;
    int a=num1;
    a++;
    cout<<num1<<" "<<a<<endl;

    int *p3=&num1;
    cout<<"before "<<num1<<endl;
    (*p3)++;
    cout<<"after "<<num1<<endl;

    //copying a pointer
    int *q=p3;
    cout<<p3<<" "<<q<<endl;
    cout<<*p3<<" "<<*q<<endl;

    //pointer airthmetic
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before "<<t<<endl;
    t=t+1;
    cout<<"after "<<t<<endl;

return 0;
}