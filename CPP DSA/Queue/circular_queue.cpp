#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){  // condition of full
            return false;
        }
        else if(front==-1){ // to check if single element
            front=rear=0;
           
        }
        else if(rear==size-1 && front!=0){ // to maintain cyclic nature
            rear=0;
           
        }
        else{ // normal 
            rear++;
           
        }
        arr[rear]=value;

        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
            //Queue is empty
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){ // if single element 
            front=rear=-1;
        }
        else if(front==size-1){ // to maintain cyclic nature
            front=0;
        }
        else{ // normal
            front++;
        }
        return ans;
    }
};

int main(){
    CircularQueue q1(5);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    cout<<q1.dequeue()<<endl;;
    cout<<q1.dequeue()<<endl;;
    return 0;
}