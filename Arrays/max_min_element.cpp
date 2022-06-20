#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int j=0;j<n;j++){
        maxNo=max(maxNo,arr[j]);
        minNo=min(minNo,arr[j]);
    }
    cout<<"Maximum number="<<maxNo<<"\n"<<"Minimum number="<<minNo;



    return 0;
}