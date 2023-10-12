// Print Half Pyramid using numbers
/* 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/

#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}