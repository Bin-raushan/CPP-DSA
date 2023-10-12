//map: (key,value)
// map always stores elements in linear increasing order
// map only store unique key
// map can have repeted value
// time complexity: log(n)

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    map<string,int>mp;
    // insertin elemets in map
    mp["raj"]=10;
    mp["kiran"]=15;
    mp["aman"]=5;
    mp["birla"]=29;
    mp["jay"]=41;

    // other way to insert:
    mp.emplace("goyal",8);


    cout<<"size of map="<<mp.size()<<endl; // ->6: prints number of element in the map

    // printing the map element
    for(auto it=mp.begin(); it!=mp.end();it++){
        // cout<<it->first<<" "<<it->second<<endl;
        // cout<<(*it).first<<" "<<(*it).second<<endl;
    }
     
    // another easy way 
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // if we use same key then it is consider as same key in the map its present  value overwrite on previous value
    mp["raj"]=90;
    cout<<"size of map="<<mp.size()<<endl;

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // if we use same value for any different key it is consider as different element in map
    mp["suman"]=90;
    cout<<"size of map="<<mp.size()<<endl;

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }


    auto it= mp.find("raj"); // returns iterator where raj lies in map


    // deleting map elements

    mp.erase("raj"); // raj will be deleted from the map
    cout<<"size of map="<<mp.size()<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    mp.erase(mp.begin()); // it  will delete the first element of the map
    cout<<"size of map="<<mp.size()<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //mp.erase(mp.begin(), mp.begin()+1); (doubt)

    mp.clear(); // it will delete all elements fro map at once
    cout<<"after clearing size:" <<mp.size()<<endl;


    // how to check map is empty or not

    cout<<mp.empty()<<endl; // 1: -> because map is empty after clearing



    // unoreder map:
    // -> there is no fix order or elements stored in the map
    // -> all map functions can be used
    // -> time complexity: 0(1) in almost all cases
    // -> time complexity: 0(n) in worst case

    unordered_map<string,int>mpp;
    mpp["one"]=1;
    mpp["two"]=2;
    mpp["three"]=3;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }



    // Multimap:
    // -> can have repeated keys in linerly increasing order
    // -> all map funtion can be used

    multimap<string,int>mlt;
    mlt.emplace("one",1);
    mlt.emplace("one",2);
    mlt.emplace("two",1);
    mlt.emplace("three",3);

    cout<<"size="<<mlt.size()<<endl;

    for(auto it:mlt){
        cout<<it.first<<" "<<it.second<<endl;
    }









 












    
    return 0;
}



