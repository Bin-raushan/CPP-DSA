// priority Queue or Maximum Priority Queue:
// -> Stores element as maximum at top and minmum at bottom.

#include<iostream>
#include<queue>
using namespace std;
 int main(){
    priority_queue<int>pq;

    // insering elements
    pq.push(1);
    pq.push(10);
    pq.push(3);
    pq.push(7);
    pq.emplace(2);

    cout<<"size="<<pq.size()<<endl;

    cout<<pq.top()<<endl; // 10: -> prints elemnts which will we at top.

    pq.pop(); // remove top element

    cout<<"size="<<pq.size()<<endl;

    cout<<pq.top()<<endl; // 10: -> prints elemnts which will we at top.

    // // empty or not

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    } cout<<endl;

    cout<<pq.empty()<<endl;




    // Minimum priority queue:
    // -> stores element as minimum at top tomaximum at bottom

    priority_queue<int, vector<int>, greater<int>>mpq;
    mpq.push(12);
    mpq.push(7);
    mpq.push(3);
    mpq.push(5);

    cout<<mpq.top()<<endl; // 3 minimum
    mpq.pop();
    cout<<mpq.top()<<endl; // 5 second minimum



    // another way using priority queue
    priority_queue<int>mpq;
    mpq.push(-1*12);
    mpq.push(-1*7);
    mpq.push(-1*3);
    mpq.push(-1*5);

    cout<<-1*mpq.top()<<endl; // 3 minimum
    mpq.pop();
    cout<<-1*mpq.top()<<endl; // 5 second minimum







    
    return 0;
 }
