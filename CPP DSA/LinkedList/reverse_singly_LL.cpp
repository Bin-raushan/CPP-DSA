#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;


    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void display(Node * &head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

void getLength(Node *&head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"size="<<count<<endl;;

}

void reverse(Node *&head){

    Node * prev=NULL;
    Node * curr=head;
    Node * after=head;

    while(after!=NULL){
        after=after->next;
        curr->next=prev;
        prev=curr;
        curr=after;

    }

    head=prev;


}




int main(){

    Node * n1=new Node(10);
    Node * n2=new Node(15);
    Node * n3=new Node(20);
    Node * n4=new Node(25);
    Node * n5=new Node(30);

    Node* head= n1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    Node * tail=n5;

    display(head);
    getLength(head);

    reverse(head);
    display(head);

    return 0;
}