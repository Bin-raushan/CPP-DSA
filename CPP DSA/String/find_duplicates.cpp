#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(string s){
unordered_map<char,int> count;
    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout<< it.first<<" "<<"count="<<it.second<<endl;
    }
}


int main(){
    string s;
    cin>>s;
    fun(s);
    // for(int i=0;i<s.length();i++){
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[j]==s[i]){
    //             cout<<s[i]<<endl;
    //         }
    //     }
    // }


    
    return 0;
}