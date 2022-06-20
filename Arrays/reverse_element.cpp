#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++,e--;

    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}