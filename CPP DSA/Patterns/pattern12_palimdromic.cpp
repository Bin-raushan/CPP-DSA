// palindromic pattern
/*
    1
   212
  32123
 4321234
543212345 

*/
#include<iostream>
using namespace std;
int main(){
int i,j,r;
cout<<"Enter number of row you want to print: ";
cin>>r;
for(i=1;i<=r;i++)
{
    int k=i;
    for(j=1;j<=(r-i);j++)
    {
        cout<<" ";
    }
    for( ;j<=r;j++)
    {
        cout<<k<<"";
        k--;
    }
    k=1;
    for( ;j<(r+i);j++)
    {
        k++;
        cout<<""<<k;
    }
    for( ;j<=(2*r-1);j++)
    {
        cout<<" ";
    }
    cout<<endl;
}
    return 0;
}