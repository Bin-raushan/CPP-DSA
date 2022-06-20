// Write a program to print fibonaci series
// 0, 1, 1, 2, 3, 5, 8, 13 and so on...
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    if (number<=1)
    {
        cout<<number;
    }
    else{
        int first_term=0,current_term,last_term=1;
        int i=3;
        cout<<first_term<<" "<<last_term<<" ";
        while(i<=number){
            current_term=first_term+last_term;
            cout<<current_term<<" ";
            first_term=last_term;
            last_term=current_term;
            i++;
        
        }

    }
    
    
    

    return 0;
}

