#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
    int i=0;
    while(i<n){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<count<<" ";
    }

return 0;
}