// Bitset:
// -> It is a container which stores 1 or 0
// 1 is called set-bit whereas 0 is called unset-bit
// int -> 16 bits 
// char -> 8 bits
// bitset -> 1 bit

#include<iostream>
#include<bitset>
using namespace std;
int main(){

    bitset<5>bt; // declared 5 size of bits container  eg:{11001}, {00000}, {11111} e.t.c
    cin>>bt; // let, bt-> 11001;

    // bit functions
    // let, bt-> 11001;

    // all() :-> return true if all bit are set, otherwise return false
    cout<<bt.all()<<endl; // 0: bt->11001 
    cout<<bt.all()<<endl; // 1: if bt=11111 

    // any() : -> return true if any bit is set, otherwise retur false
    cout<<bt.any()<<endl; // 1: bt->11001
    cout<<bt.any(); // 0: if bt->00000

    //count(): print the number of set-bet 
    cout<<bt.count()<<endl; // 3 bt:->11001

    // flip(): it flip set(1)->unset(0), 0->1 
    cout<<bt.flip()<<endl; // flip entire bits
    cout<<bt.flip(2)<<endl; // flip the 2nd index bit only. (index starts from 0)

    // none(): return true(1), if no set-bit is there, otherwise return false(0)
    cout<<bt.none()<<endl; // 0: bt->11001
    cout<<bt.none()<<endl; // 1: bt->00000

    // set(): set all indexes to 1 
	cout<<bt.set()<<endl; // 11111 
 
	cout<<bt.set(2)<<endl; // sets the 2nd index
 
	bt.set(2, 0); // set second index bit 0
 
 
	// // reset 
	cout<<bt.reset()<<endl; // turn all indexes to 0 
 
	cout<<bt.reset(2)<<endl; // turn the 2nd index to 0 
 
	// // size 
	cout << bt.size()<<endl; // prints 5 
 
	// // test 
	cout << bt.test(1); // check if the bit is set or not at index  1
 




    return 0;
}