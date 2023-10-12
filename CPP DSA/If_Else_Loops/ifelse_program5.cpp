// Program to check vowel or constant
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any alphabate: ";
    cin>>ch;
    int low_vowel,up_vowel;
    low_vowel=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    up_vowel=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    if (low_vowel || up_vowel)
    {
        cout<<"It is a vowel.";
    }
    else
    {
        cout<<"It is a constant.";
    }
    
    
    return 0;
}