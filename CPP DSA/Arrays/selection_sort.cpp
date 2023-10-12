// step1: find the minimum element in unsorted array and swap it with element at begining.
// step2: The algorithms maintains two subarray 
    // (i)the subarray which is already sorted, (ii)remaining unsorted array
// repeat step1 for remaining subarray till whole array become sorted
// time complexity: o(n^2)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array's elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }

    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}