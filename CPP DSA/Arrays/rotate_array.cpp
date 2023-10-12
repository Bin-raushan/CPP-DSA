// Given An array of N elements, your task is to rotate the array to the left by k steps, where K>0
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Write array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of K: ";
    cin>>k;
    int i,j,temp;

    // left rotation
    // for( i=1;i<=k;i++){
    //     temp=arr[0];
    //     for(j=0;j<n-1;j++){
    //         arr[j]=arr[j+1];
    //     }
    //     arr[j]=temp;
    // }
    // cout<<"Rotated array"<<endl;
    // for(int l=0;l<n;l++){
    //     cout<<arr[l]<<" ";
    // }

    //  right rotation
    for(i=1;i<=k;i++){
        temp=arr[n-1];
        for(j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=temp;

    }
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }

    return 0;
}