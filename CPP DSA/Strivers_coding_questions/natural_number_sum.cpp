#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;

    // other way
    // sum=n*(n+1)/2
    return 0;
}