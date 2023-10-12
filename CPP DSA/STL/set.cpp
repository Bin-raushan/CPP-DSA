// set or orderd set
// stores unique value in ascending order
// time complexity of set operatin is log(n) // n=size of set

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
 int main(){
    set<int>st={1,3,4,5,7,9};

    // set functions:

    cout<<st.size()<<endl;
    st.insert(11);
    st.insert(10);
    st.emplace(2);

    for(auto it:st){
        cout<<it<<" ";
    }cout<<endl;

    cout<<st.size()<<endl;

    // deleting

    st.erase(st.begin());
    st.erase(10); 

    // st.erase(st.begin(), st.begin() + 2 ); (doubt)

    auto it= st.find(3); // return the iterator points to 3
    auto it1=st.find(7); //// return the iterator points to 7
    st.erase(it,it1);
   
    // printing set elements
    for(auto it:st){
        cout<<it<<" ";
    }cout<<endl;





    // unorder set: stores unique elements but no fix order
    // average time complexity = 0(1)
    // we can use all set operations like size(), find(), insert(), erase(), in unoredered set too 
    unordered_set<int>ust;
    ust.insert(2);
    ust.insert(5);
    ust.insert(3);
    ust.insert(10);
    cout<<ust.size()<<endl;

    for(auto it:ust){
        cout<<it<<" ";
    }






    // multiset: way to store all duplicate elements also
    // it stores all the elements in sorted order
    // all set functions and operations can be use in multiset also

    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);

    cout<<ms.size()<<endl;

    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;

     ms.erase(2); // all instances of 2 will be delated
     for(auto it:ms){
        cout<<it<<" ";
    }


    // ms.erase(ms.find(2), ms.find(2)+2); (doubt)

    ms.clear(); // delete entire set at once

    cout<<ms.count(2)<<endl; // ->4: print the number of time 2 occurs in the set









    return 0;
 }