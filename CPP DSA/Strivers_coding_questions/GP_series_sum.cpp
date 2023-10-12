#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a;
    float r;
    float n;
    cout<<"Enter number of term: ";
    cin>>n;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter common ratio: ";
    cin>>r;
    float sum=a;
    for(int i=1;i<n;i++){
        sum=sum+a*pow(r,i);
    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}

// other way
// sum=a(r^n -1)/(r-1)