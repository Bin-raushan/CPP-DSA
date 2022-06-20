// write a program to print floyd's triangle
/* 
1
2 3
4 5 6
7 8  9 10
11 12 13 14 15

*/

#include<iostream>
using namespace std;
int main(){
    int row,i,j,k=1;
    cout<<"Enter number of row: ";
    cin>>row;
    for ( i = 1; i <=row; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
            
    }
        
    return 0;
}