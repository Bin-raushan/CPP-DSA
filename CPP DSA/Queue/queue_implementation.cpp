// Queue:
// -> A linear data structure
// -> Follows First in first out (FIFO) order
// ->operations: push(), pop(), front(), empty(), size()

#include <bits/stdc++.h>
using namespace std;

// queue implementation using array
class Queue
{
public:
    int *arr;
    int size;
    int qf;
    int qb;
    Queue(int n)
    {
        // Implement the Constructor
        this->size = n;
        arr = new int[size];
        qf = 0;
        qb = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (qf == qb)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (qb == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[qb] = data;
            qb++;
        }
    }

    void dequeue()
    {
        // Implement the dequeue() function
        if (qf == qb)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            arr[qf] = -1;
            qf++;
            if (qf == qb)
            {
                qf = 0;
                qb = 0;
            }
        }
    }

    int front()
    {
        // Implement the front() function
        if (qf == qb)
        {
            return -1;
        }
        else
        {
            return arr[qf];
        }
    }

    // printing queue element
    void print()
    {
        if (qf==qb)
        {
            cout << "queue is empty";
        }
        else{
            while(qf!=qb){
                cout<<arr[qf]<<" ";
                qf++;

            }
        }
    }
};

int main()
{
    Queue q1(5);

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    q1.print();
    q1.dequeue();

    cout << q1.front() << endl;
    return 0;
}