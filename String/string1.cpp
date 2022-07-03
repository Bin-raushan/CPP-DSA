#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Raushan";//statically
    cout<<s<<endl;
    string *s2=new string; // Dynamically
    *s2="Roy";
    cout<<s2<<endl;//print adress of string
    cout<<*s2<<endl;

    // we can treat string as an array
    string s3="Mohan";
    cout<<s3<<endl;
    s3[0]='R';
    cout<<s3<<endl;

    // we can add two string;
    string s4="Kamal";
    string s5="Nath";
    string s6=s4 + " " +s5;
    cout<<s6<<endl;


    // string vector

    vector<string>v;
    v.push_back("hello");
    v.push_back("world");
    v.push_back("How");
    v.push_back("are");
    v.push_back("you");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}