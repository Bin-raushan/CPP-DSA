#include <iostream>
using namespace std;

//Making a Node
class Node
{
public:
    int data;
    Node *next;

    // making contructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// makng function for printing node
void print(Node* head) // passing the head by value
{
     
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    // cout<<endl;
    // temp = head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    // while (head != NULL)
    // {
    //     cout << head->data << "->";
    //     head = head->next;
    // }
}

int main()
{
// creting objects Statically
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    Node *head = &n1; //storing address of first node

    //Making connection between two node
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    // print(head); // calling print function to print node
    // cout<<endl;


    // creating object dynamically
    Node *n6=new Node(6);
    Node *n7=new Node(7);
    Node *n8=new Node(8);
    n5.next=n6;
    //To access members of a structure through a pointer, use the arrow operator.
    n6->next=n7;
    (*n7).next=n8;

    print(head);
    return 0;
}