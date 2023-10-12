#include <iostream>
using namespace std;

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


// insertion in CLL
void insert(Node *&tail, int comp, int d)
{
    // if Linked list is empty

    if (tail == NULL)
    {
        Node *add = new Node(d);
        tail = add;
        add->next = add;
    }

    else{
    // if LL is not empty
    // assume that element is present in the LL
    Node *curr = tail;
   
    while (curr->data != comp)
    {
        curr = curr->next;
    }

    Node *temp = new Node(d);
    temp->next=curr->next;
    curr->next=temp;
   
    }
}

// travasal
void display(Node * tail){
    Node* print=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=print);

    cout<<endl;

}

// deletion in CLL

void deleteNode(Node * & tail, int value){
    Node * temp=tail;
    Node * curr=temp->next;
    while(curr->data!=value){
        temp=curr;
        curr=curr->next;
    }
    temp->next=curr->next;


    // 1 node linkedlist 
    if(curr==temp){
        tail=NULL;
    }
    // if node>=2
    else if(tail==curr){
        tail=temp;
    }

    curr->next=NULL;
    delete curr;


}






int main()
{
    Node *tail = NULL;
  
    insert(tail,5,3);
    // display(tail);
    // insert(tail,3,5);
    // display(tail);
    // insert(tail,5,8);
    // display(tail);
    // insert(tail,5,10);
    // display(tail);

    deleteNode(tail,3);
    display(tail);
    return 0;
}