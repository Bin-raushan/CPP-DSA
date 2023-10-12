#include<iostream>
using namespace std;


// void print(int *a){
//     cout<<a<<endl;
//     cout<<*a<<endl;
// }

// void update(int * q){
//     // q=q+1;
//     // cout<<"inside"<< q <<end; 
//     *q=*q+1;

// }

int getSum(int * ar, int n){
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += ar[i];
    }
    return sum;
}

int main(){
    // int arr[]={1,2,3,4,5};
    // cout<<"Address of first memory block is "<<&arr[0]<<endl;
    // // array of name gives the address of first memory block of array
    // cout<<"Address of first memory block is "<<arr<<endl;

    // cout<<"first element of array "<<arr[0]<<endl;
    // cout<<"first element of array "<<*arr<<endl;
    // cout<<"second element of array "<<*(arr+1)<<endl;
    // cout<<"third element of array "<<*(arr+2)<<endl;
    // cout<<"forth element of array "<<*(arr+3)<<endl;

    // // so, arr[i]=*(arr+i)  or i[arr]=*(i+arr)
    // int i=2;
    // cout<<"3rd element is "<<i[arr]<<endl;
    // cout<<"3rd element is "<<*(i+arr)<<endl;

    // cout<<"update in first elemet "<<(*arr)+3;

/*
    int temp[10];
    cout<<"size of temp is "<<sizeof(temp)<<endl;
    cout<<"address is "<<&temp[0]<<" "<<temp<<" "<<&temp<<endl; // all gives same value

    int *ptr=&temp[0];
    cout<<"size of ptr "<<sizeof(ptr)<<endl;
    cout<<"size of value present at first location "<<sizeof(*ptr)<<endl;
    cout<<"size of variable which stores the address of ptr "<<sizeof(&ptr)<<endl;

    // address of ptr will be different from address of &temp[0]
    cout<<"address of ptr is "<<&ptr<<endl;
*/

/*
int a[20]={2,3,4,5};
//a=a+1; gives error

int *p=&a[0];
cout<<"first value is "<<*p<<endl;

p=p+1;
cout<<"second value is "<<*p<<endl;
*/

//chracter array
// char ch[6]="abcde";
// cout<<ch<<endl; // attension here name of array will not print address of first element

// char *pt=&ch[0];
// cout<<pt<<endl;  // print entire string

// functions
// int value=5;
// int *p=&value;
// print(p);
// cout<<"before "<<*p<<endl;
// update(p);
// cout<<"after "<<*p<<endl;

  int arr[6] = {1,2,3,4,5,8};


  cout << "Sum is " << getSum(arr+3 ,2) << endl ;  



    return 0;
}