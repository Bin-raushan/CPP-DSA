// print inverted half pyramid using number
// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}