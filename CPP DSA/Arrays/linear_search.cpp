// Linear Search in an array
/* {12,18,20,42,8,10}
   key=8
   return the index value where key value is present the given array
   if key is not present in an array return -1

   process:
   we will match the key value to the first element of array if it matches then return 0,
   otherwise keep mooving to that element of array where key value matches and return the index value 
   of that element in array. 

   time complexity=o(n)

*/


#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value: ";
    cin>>key;
    cout<<"The index value of array elements= "<<linearSearch(arr,n,key)<<endl;

    return 0;
}