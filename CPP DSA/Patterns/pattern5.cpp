// Print Half Pyramid after 180 degree rotation

//      *
//     **
//    ***
//   ****
//  *****

#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows you want to print: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if((i+j)<=row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
  