// half pyramid using  number
/*
1
22
333
44446
55555
*/

#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}