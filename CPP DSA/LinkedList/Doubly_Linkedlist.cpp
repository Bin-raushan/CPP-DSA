#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

// printing/ traversing a doubly linkedlist
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// getting length of linkedlist
int getLength(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;

}


// Insertion in Doubly Linkedlist
// Insert At head
void insertAtHead(Node * &head,Node * &tail, int d){
    // Empty List
    if(head==NULL){
        Node * temp=new Node(d);
        head=temp;
        tail=temp;

    }
    else{
    Node* add=new Node(d);
    add->next=head;
    head->prev=add;
    head=add;
    }

}

// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int d){

    // empty list
    if(tail==NULL){
        Node * temp=new Node(d);
        tail=temp;
    }
    else{
    Node* addT=new Node(d);
    tail->next=addT;
    addT->prev=tail;
    tail=addT;
    }
}

// insert at any position
void insertAtPosition(Node* &head, Node* &tail, int position, int d){
     // inserting at 1st position
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node *temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }

    // creating a node to insert
    Node * addP=new Node(d);
    addP->next=temp->next;
    temp->next->prev=addP;
    temp->next=addP;
    addP->prev=temp;

}



// Deletion in doubly Linkedlist
void deleteNode(Node * &head, int position){
    // deleting first or start node
    if(position==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;

        // memory free
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
        curr->prev=NULL;
        prev->next=curr->next;
        prev->next=curr->next;
        curr->next=NULL;

        // memory free
        // curr->next=NULL;
        delete curr;

    }
}









// main function starts
int main(){

    // Node* n1=new Node(10);
    
    Node * head=NULL;
    Node * tail=NULL;
    // print(head);
    // inserting node
    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,12);
    print(head);
    insertAtHead(head,tail,13);
    print(head);

    insertAtTail(head,tail,15);
    print(head);
    insertAtTail(head,tail,16);
    print(head);

    // cout<<getLength(head);
    insertAtPosition(head,tail,6,100);
    print(head);

    // deleting node
    deleteNode(head,1);
    print(head);
    deleteNode(head,3);
    print(head);
    deleteNode(head,4);
    print(head);
    


    return 0;
}