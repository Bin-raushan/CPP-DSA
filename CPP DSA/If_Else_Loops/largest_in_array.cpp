// find largest element in array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    cout<<largest;

    return 0;
}