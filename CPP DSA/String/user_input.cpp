#include<iostream>
using namespace std;
int main(){
    // string str;
    // cin>>str;   // this approach will stops taking input as space/tabs comes
    // cout<<str<<endl; // if we take input as Raushan Roy, output will be only Raushan

    string str1;
    getline(cin, str1); // this approach will take entire input including space or tabs
    cout<<str1<<endl; 



    return 0;
}