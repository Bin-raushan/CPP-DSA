// we have two type of memory allocation 1.)stack 2.)Heap

#include<iostream>
using namespace std;
int main(){

    // stack memory allocation
    // int i=5;
    // char ch='a';
    // float b=2.3;
    // int arr[10]; 
    
    // if we want to use heap memory we have to use new keyword, and it is called dynemic memory allocation.
    int * a=new int; 
    char * ch=new char;

    int * arr=new int[10];
    for(int i=0;i<10;i++){
        //cin>>arr[i];
        cin>>*(arr+i);

    }
     for(int i=0;i<10;i++){
        // cout<<arr[i]<<" ";
        cout<<*(arr+i)<<" ";

    }



    return 0;
}