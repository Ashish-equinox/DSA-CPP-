#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor(creating a doubly LL)
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    // destructor
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }


};

// note|| never use "head" ptr directly within any fn rather use a ptr to that head and then use that ptr. as its a common practice to avoid modifying the original head pointer unintentionally

// prints LL
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// prints length of LL
int getLength(Node* &head){
    Node* temp=head; // temp equates to head means we start travesing from head for either printing/counting it all till tail
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<len<<endl;
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int data){
    if(head==NULL){
        // create a node to make that head ptr point to it
        Node* temp=new Node(data);
        
        // incase of single node(i.e. temp,here) both ptr(s)'ll point to same node
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp; //current head shifts to temp as this node inserted at head
    }

}
void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;//tail moves at last ptr
    }
    

}
void insertAtPosition(Node* &tail, Node* &head,int position,int data){ //most important
    // insert at start
    if (position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    // temp ptr's work is of traversing from start till (count<position-1)
    Node* temp=head; 

    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }

    // creating a node dynamically for insertion
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}
void deleteNode(int position,Node* &head){

    // deleting first or start start node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        // memory free start node
        delete temp; //current obj is temp ptr 
    }
    else{
        // deleting any middle/last node
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}

int main(){
    // below is the case where head & tail points to a already created node i.e. node1
    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    // below is the case where head & tail points to NULL i.e no node created at that point(due to which insert at head & tail has to be modified and now even for head/tail insertion both head and tail ptr(s) has to be passed)
    Node* head=NULL;
    Node* tail=NULL;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,15);
    print(head);

    cout<<"till above, insertion is at head"<<endl;

    cout<<"now insertion is at tail"<<endl;

    insertAtTail(tail,head,20);
    print(head);

    cout<<endl;

    // insertion at any position

    cout<<"insertion at any position"<<endl;

    insertAtPosition(tail,head,2,100);
    print(head);

    insertAtPosition(tail,head,1,101);
    print(head);

    insertAtPosition(tail,head,6,102);
    print(head);

    // deletion at any position

    deleteNode(1,head);
    print(head);

    deleteNode(5,head);
    print(head);

    
}