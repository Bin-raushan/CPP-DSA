#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }

    // destructor
    // ~Node() {
    //     int value = this -> data;
    //     //memory free
    //     if(this->next != NULL) {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << " memory is free for node with data " << value << endl;
    // }



};


void deleteNode(Node * &head, int position){
    // deleting first or start node
    if(position==1){
        Node *temp=head;
        head=head->next;
        // memory free start node
        temp->next=NULL;
        delete temp;
    }
    // deleting middle or last node
    else{
        Node * curr=head;
        Node * prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;

        // memory free
        curr->next=NULL;
        delete curr;

    }
}

void print(Node* & head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main(){
    Node * n1=new Node(10);
    Node * n2=new Node(11);
    Node * n3=new Node(12);
    Node * n4=new Node(13);
    Node * n5=new Node(14);
    Node * n6=new Node(15);
    Node * n7=new Node(16);

    Node * head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;


    print(head);
    deleteNode(head,1);
    print(head);
    deleteNode(head,4);
    print(head);
    deleteNode(head,5);
    print(head);
    

    

    return 0;
}