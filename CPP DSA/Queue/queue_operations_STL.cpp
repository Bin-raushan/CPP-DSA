#include<iostream>
#include<queue>
using namespace std;

int main(){
    // queue
    // first in first out

    queue<int>q;


    // push()
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4); //{4,3,2,1}


    //pop()  
    q.pop();  // 1 will be removed


    //front()
    q.front(); // print the front element of queue


    //size()  // print number of element present in the queue
    q.size();

    // empty  // check queue is empty or not
    q.empty();



    // dequeue
    // insert and remove element from both end

    deque<int>dq;


    dq.push_back(1);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.size();

    dq.empty();

    

    



    return 0;
}