// Queue:
// -> It is a data structure opposite of stack
// -> works on: First In First Out (FIFO)
// -> Time complexity: 0(1)

#include<iostream>
#include<queue>
using namespace std;
 int main(){
    queue<int>q;

    // insering element in queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout<<"size="<<q.size()<<endl; // 5

    cout<<q.front()<<endl; // 1: -> prints the first element entered

    q.pop(); // remove the first element entered

    cout<<q.front()<<endl; // 2

    // how to check empty or not

    cout<<q.empty()<<endl; // 0: queue is not empty 

    while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();

    }cout<<endl;

    cout<<q.empty()<<endl; // 1: queue is not empty 

    
    

    


    return 0;
 }


