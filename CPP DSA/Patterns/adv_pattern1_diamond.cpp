// Print Diamond using Stars : Given n, print diamond with 2*n rows.
/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/
#include<iostream>
using namespace std;
int main(){
    int i,j,row;
    cout<<"Enter number of row you want to print: ";
    cin>>row;
    for(i=1;i<=2*row-1;i++){
        for(j=1;j<=(2*row-1);j++){
            if((i+j)<=row){
                cout<<" -";
            }
            else if((j-i)>=row){
                cout<<" -";
            }
            else if((i-j)>=row){
                cout<<" -";
            }
            else if((i+j)>=3*row){
                cout<<" -";
            }
            else{
                cout<<"-*";
            }
                
            
        }
        cout<<endl;
    }
    return 0;
}