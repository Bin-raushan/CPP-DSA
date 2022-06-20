#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int count=1;
        while(count<=i){
            cout<<" * ";
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}