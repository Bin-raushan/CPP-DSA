//conversion of lowercase character into uppercase
#include<iostream>
using namespace std;
int main(){
    char low_ch,up_ch;
    cout<<"Enter any lowercase character: ";
    cin>>low_ch;
    up_ch=low_ch-32;
    cout<<"Upper case of given character: "<<up_ch;
    return 0;
}