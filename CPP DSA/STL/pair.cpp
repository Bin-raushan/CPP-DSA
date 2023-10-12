// pair class:
// -> It is a defined data type
// -> can have two values togeather in a pair

#include<iostream>
#include<bits/stdc++.h> // master headerfile
using namespace std;
int main(){
    pair<int,int>pr={1,2};
    cout<<pr.first<<" "<<pr.second<<endl;

    // nested pair:
    pair<pair<int,int>,pair<int,string>>prr={{1,2},{1,"one"}};
    cout<<prr.first.first<<" "<<prr.first.second<<endl;
    cout<<prr.second.first<<" "<<prr.second.second<<endl;

    // vector<pair<int,int>>vec; // vector of pairs
    vector<pair<int,int>>vec;
    vec.push_back(make_pair(1,1));
    vec.push_back(make_pair(2,2));
    vec.push_back(make_pair(3,3));

   for (int i=0; i<3; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vec[i].first << " "
             << vec[i].second << endl;
    }
  



       


    // set<pair<int,int>>st; // set of pairs
    // map<pair<int,int>, int>mp; key of map in pairs



    return 0;
}

