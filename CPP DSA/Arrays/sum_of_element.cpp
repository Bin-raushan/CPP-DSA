#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    cout<<"Sum="<<sum;
    return 0;
}