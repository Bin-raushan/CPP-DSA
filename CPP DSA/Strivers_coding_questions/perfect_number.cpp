#include<iostream>
using namespace std;
bool isPerfect(int n){
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
        
    }
    return(sum==temp);

}

int main(){
    int n1;
    cin>>n1;
    if(isPerfect(n1)){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}