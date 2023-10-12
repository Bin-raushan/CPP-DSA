// inline function: function call replaced with the body of function
// benifts:
//no extra memory uses
// no function call over head
// we can use inline only if we have body of function 1-2 lines

#include<bits/stdc++.h>
using namespace std;

inline int getmax(int &a, int &b){
    return (a>b)?a:b;
    
}

// default aruguments

int getsum(int x, int y, int z=0){ // we can make left arguments default if and only if our all right most arguments are default
    return x+y+z;
}

int main(){
    int a=2;
    int b=3;
    cout<<getmax(a,b)<<endl;
    
   
    a=a+3;
    b=b+1;
    cout<<getmax(a,b)<<endl;

    cout<<getsum(2,5)<<endl; // default arguments replced with 0
    cout<<getsum(2,5,10)<<endl; // default arguments replced with 10
   

return 0;
}