#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack<int>s;

    //push()
    s.push(1);
    s.push(2);
    s.push(3);

    //pop()
    s.pop();

    //top()
    cout<<"top element is "<<s.top()<<endl;

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    return 0;
}