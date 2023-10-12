// refference variable: Different name same memory
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    // cout<<"inside"<<a<<" "<<b<<endl;

}
int main(){
    // int i=5;
    // int &j=i;
    // cout<<i<<" "<<j<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    // reference variable in function
    int a=5;
    int b=10;
    cout<<"befor swap "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swap "<<a<<" "<<b<<endl;

    return 0;
}