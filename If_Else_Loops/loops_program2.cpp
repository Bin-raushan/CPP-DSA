//Multipilication table of any number given by user
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    int count;
    cout<<"Enter count as far you have to print multiplication table: "; 
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        cout<<number<<"*"<<i<<"="<<number*i<<endl;
    }
    return 0;
}