// Binary Search in an array
// For implement binary search elemenmt must be sorted.
// {8,10,12,21,27 34 42}
//  key=27
//  return the index value where key value is present the given array
//  if key is not present in an array return -1
/*Process:
  1.) find mid element of array
  2.) Compare key value to the mid element of array
  3.) if mid element lsss then key value it's confirm that key value will be present after mid element of array
        so, repeat above process for element after mid element and so on..
      if mid element is greater than key value repeat above process for element before mid element and so on..

      time complexity=o(logn)
 */


#include<iostream>
using namespace std;
int binarySearch(int n, int arr[], int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key which you want to find: ";
    cin>>key;
    cout<<"The index value of array element= "<<binarySearch(n,arr,key);

    return 0;
}