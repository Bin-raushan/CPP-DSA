#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;
// global declaration:
// array<int,5>arr; // prints {0,0,0,0,0}

int main(){
    // local declaration
    array<int,5>arr; // prints garbage value
    array<int, 5>arr ={1,2}; // prints {1,2,0, 0 ,0}
    array<int, 5>arr ={0}; // prints {0,0,0, 0 ,0}

    // array functions:

    array<int, 5>arr;
    arr.fill(5); // fills entire array with 5

    array<int,5>arr={1,2,3,4,5};
    cout<<"first element="<<arr.front()<<endl;
    cout<<"last element="<<arr.back()<<endl;
    cout<<"index at index 2 is="<<arr.at(2)<<endl; // ->3: prints elements at index 2
    cout<<"size of array is="<<arr.size()<<endl; // ->5: prints size of array

    // Iterators:
    // begin(), end(), rbegin(), rend()

    array<int, 5> arr = {1, 3, 4, 5, 6}; 

	for(auto it=arr.begin(); it!=arr.end();it++) {
		cout << *it << " "; 
	}
 
	for(auto it=arr.rbegin(); it!=arr.rend();it++) {
		cout << *it << " "; 
	}
 
	for(auto it=arr.end() - 1; it>=arr.begin();it--) {
		cout << *it << " "; 
	}
 
	// // for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}
 
	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto i:s) {
		cout << i << " "; 
	}


 return 0;
   
}