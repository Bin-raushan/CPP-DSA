// Calculate number of set bit
//Ex- 5=000101 o/p=2
//Ex - 7=000111 o/p=3
#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n>0){
        count=count+(n&1);
        n=n>>1;
    }
    cout<<"Number of set bit="<<count;
    return 0;
}
