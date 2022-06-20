// 0-1 pattern
/*
1
01
101
0101
10101 
*/



#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for ( i = 1; i<=row; i++)
    {
        for (j=1; j<=i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
            
        }
        cout<<endl;
        
    }
    

    return 0;
}