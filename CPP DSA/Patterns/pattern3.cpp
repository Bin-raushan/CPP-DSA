// Print Half Pyramid Pattern using Stars
// *
// **
// ***
// ****
// *****


#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}