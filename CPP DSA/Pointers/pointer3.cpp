// double pointer
#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int **q=&p;

    cout<<i<<" "<<*p<<" "<<**q<<endl;
    cout<<&i<<" "<<p<<" "<<*q<<endl;
    cout<<q<<" "<<&p<<endl;



}
