#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int d;
    cin>>d;

    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+a;
        a=a+d;
    }

    cout<<sum;


    //other way
    // sum=n/2(2a+(n-1)d)
    return 0;
}