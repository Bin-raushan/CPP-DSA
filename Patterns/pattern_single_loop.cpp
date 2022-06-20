#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of row you want to print: ";
    cin>>num;
    int j=0;
    int i=1;
    for(int i=1;i<=num;){
        if(j<i){
            j++;
            cout<<i*j<<" ";
            continue;
        } 
        if(j==i){
            cout<<"\n";
            i++;
            j=0;
        } 
         

    }

    return 0;
}