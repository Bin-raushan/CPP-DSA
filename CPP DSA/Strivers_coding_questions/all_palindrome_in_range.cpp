#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        rev=10*rev+n%10;
        n/=10;
    }
    if(temp==rev){
        return true;
    }
    return false;

}
int main(){
    int start;
    int end;
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(ispalindrome(i)){
            cout<<i<<" ";
        }
    }

return 0;
}