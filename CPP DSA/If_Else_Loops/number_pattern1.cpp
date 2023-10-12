#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<"  ";
            j++;
        }
        int k=1;
        int value=1;
        while(k<=2*i-1){
            cout<<value<<" ";
            k++;
            value++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}