// Inverted half pyramid using number

#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=row;j>=i;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}