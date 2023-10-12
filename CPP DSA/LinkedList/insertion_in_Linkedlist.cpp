#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    //constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }

};

// traversing a linked list
void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

//insertAtHead
void insertAtHead(Node* &head, int d){
    // creating a new node
    Node * add=new Node(d);
    add->next=head;
    head=add;
}

// insertionAtTail
void insertAttail(Node * &tail, int d){
    Node * addTail=new Node(d);
    tail->next=addTail;
    tail=addTail;
}


// insert at any position
void insertAtPosition( Node* &head, Node* &tail, int position,int d){
    // if we want to insert a node at position n then we will have to
    // traverse at position n-1;

    // inserting at 1st position
    if(position==1){
        insertAtHead(head,d);
    }
    else{
    Node *temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // inserting at last position
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
    }

    // creating a node to insert
    Node * insert=new Node(d);
    insert->next=temp->next;
    temp->next=insert;
    }
}


// main functions start
int main(){
    // statically
    Node n1(2);
    Node n2(5);
    Node n3(8);
    // dynamically
    Node* n4=new Node(12);
    Node* n5=new Node(15);
    Node* n6=new Node(20);
    Node* head= &n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=n4;
    n4->next=n5;
    (*n5).next=n6;

    // craeting tail pointer which will point last node of linked list
    Node *tail=n6;


    // print(head);
    // cout<<endl;
    // insertAtHead(head,25);
    // print(head);
    // cout<<endl;
    // insertAtHead(head,30);
    // print(head);


    // print(head);
    // insertAttail(tail,40);
    // print(head);
    // insertAttail(tail,50);
    // print(head);
    print(head);
    insertAtPosition(head,tail,1,51);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    


    return 0;
}