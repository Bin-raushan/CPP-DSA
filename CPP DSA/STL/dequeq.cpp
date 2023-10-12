// Deque:
// -> We can insert and delete elments from both end

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    // inserting element from front
    dq.push_front(1); // {1}
    dq.push_front(2); // {2,1}
    dq.push_front(5); // {5,2,1}

    // inserting element from end
    dq.push_back(3); // {5,2,1,3}
    dq.push_back(4); // {5,2,1,3,4}

    cout<<"size="<<dq.size()<<endl;

    cout<<dq.at(0)<<endl;
    cout<<dq[4]<<endl;

     // printing deque element
    for(auto it:dq){
        cout<<it<<" ";
    }cout<<endl;


    // deleting element from front
    dq.pop_front();
    cout<<dq.at(0)<<endl;

    // deleting element from end
    dq.pop_back();
    cout<<dq.at(2)<<endl;

    cout<<dq.size()<<endl;

    // printing deque element
    for(auto it:dq){
        cout<<it<<" ";
    }cout<<endl;

    dq.clear(); // delete entire seque element at once

    cout<<dq.empty(); // 1 : return 1 if empty, otherwise 0


    // cout<<dq.begin(); //  gives iterator of staring element
    // end() : gives iterator of right after last elemnt
    // rbegin(): gives iterator of last element
    // rend(): gives iterator of  right before staring element



    return 0;
}