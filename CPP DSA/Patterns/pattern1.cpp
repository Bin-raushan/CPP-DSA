/* print solid rectangle
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter number of row you want to print: ";
    cin>>row;
    cout<<"Enter number of column you want to print: ";
    cin>>col;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}