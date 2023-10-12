// Stack:
//-> A linear data structure
//-> follow last In First Out (LIFO) order
// Operations: push(), pop(), top(), empty(), size()

#include <iostream>
using namespace std;

// stack implementation using array
// class Stack
// {
// public:
//     // data member
//     int *arr;
//     int size;
//     int top;

//     // behaviour
//     Stack(int n)
//     {
//         this->size = n;
//         arr = new int[n];
//         top = -1;
//     }

//     // operations:

//     // 1.)push(): insert element from top
    // void push(int data)
    // {
    //     if (size - top > 1)
    //     {
    //         top++;
    //         arr[top] = data;
    //     }
    //     else
    //     {
    //         cout << "stack overflow" << endl;
    //     }
    // }

//     // 2.) pop(): remove element from top
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "stack underflow" << endl;
//         }
//     }

//     // 3.) peek(): returm current top element
//     int peek()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//     }

//     // 4.) empty(): check stack is empty or not
//     bool empty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

// for printing stack value
// void print()
// {

//     if (top == -1)
//     {
//         cout << "stack is empty";
//     }
//     else
//     {
//         while (top != -1)
//         {
//             cout << arr[top] << endl;
//             top--;
//         }
//     }
// }
// };

// stack implementation using linkedList

class Node
{
public:
    int data;
    Node *next;

    // constructor

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// operations:

// is empty
int isempty(Node *&top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}


// is full
int isfull(Node *&top, int d)
{
    Node *temp = new Node(d);
    if (temp == NULL)
    {
        return 1;
    }
    return 0;
}

// push
void push(Node *&top, int d)
{

    if (isfull(top, d))
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        Node *add = new Node(d);
        add->next = top;
        top = add;
    }
}

// pop
int pop(Node *&top)
{
    if (isempty(top))
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        Node *add = top;
        top = top->next;
        int x = add->data;
        delete add;
        return x;
    }
}


// printing stack value
void display(Node *&top)
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << "Element: " << temp->data << endl;
        temp = temp->next;
    }
}


// peek
int peek(Node * &top, int position){
    Node * temp=top;
    int count=0;
    while(count<position-1 && temp!=NULL){
        temp=temp->next;
        count++;

    }
    if(temp!=NULL){
        return temp->data;
    }
    else{
        return -1;
    }

}

int main()
{
    // Stack st(5);

    // st.push(5);
    // st.push(10);
    // st.push(15);
    // // st.push(20);
    // // st.push(25);
    // // st.print();
    // cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;
    // st.pop();
    // // cout<<st.peek()<<endl;
    // cout<<st.empty();

    Node *top = NULL;
    push(top, 5);
    push(top, 10);
    push(top, 15);
    push(top, 20);
    push(top, 25);

    display(top);

    cout<<"peek element is:"<<peek(top,5)<<endl;;

    // cout << "popped element is:" << pop(top) << endl;
    // cout << "popped element is:" << pop(top) << endl;

    return 0;
}