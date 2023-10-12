// stack:
// -> It is a data structure
// -> works on: last In First Out (LIFO)
// --> time coplexity: (1) in almost all operations/functions

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;

    // inserting elements in stack

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // other way to insert
    st.emplace(6);

    cout<<"size of stack="<<st.size()<<endl; // 6: -> prints number of elements present in stack at the moment

    cout<<"top element="<<st.top()<<endl; // print the last entered element

    st.pop(); // delete the last entered element from stack

    cout<<st.top()<<endl;

    // how to check stack is empty or not
    cout<<st.empty()<<endl; //1: -> return 1 if empty, 0 if not empty

    // how to print stack element
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    // how to deletet entire stack
    while(!st.empty()){
        st.pop();
    }

    cout<<st.empty()<<endl; // 1








    
    return 0;
}
