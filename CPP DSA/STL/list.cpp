// list: 
// -> we can insert and delete element from both end

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>ls;
    // inserting element from front
    ls.push_front(1); // {1}
    ls.push_front(2); // {2,1}
    ls.push_front(5); // {5,2,1}

    // inserting element from end
    ls.push_back(3); // {5,2,1,3}
    ls.push_back(4); // {5,2,1,3,4}

    cout<<"size="<<ls.size()<<endl;
    cout<<ls.front()<<endl;
    cout<<ls.back()<<endl;

   

     // printing list element
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;


    // deleting element from front
    ls.pop_front();
    cout<<ls.front()<<endl;

    // deleting element from end
    ls.pop_back();
    cout<<ls.back()<<endl;

    cout<<ls.size()<<endl;

    // printing deque element
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    // remove of any element of list
    ls.remove(1);

    cout<<"after removing 1"<<endl;
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    ls.clear(); // delete entire seque element at once

    cout<<ls.empty(); // 1 : return 1 if empty, otherwise 0


    // cout<<ls.begin(); //  gives iterator of staring element
    // end() : gives iterator of right after last elemnt
    // rbegin(): gives iterator of last element
    // rend(): gives iterator of  right before staring element



    return 0;
}