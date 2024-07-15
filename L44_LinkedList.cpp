// * Imp.Topic

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this->data=data; //Node's data set to 10 given by user
        this->next=NULL; 
        // Node's ptr showing NULL meaning there is no next node/tis' last node
    }

    // destructor(created for using delete keyword)
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
            // This ensures that all nodes linked from the current node are also deleted, preventing memory leaks.
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){

    //  new node created
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
}

void insertAtTail(Node* &tail,int data){
    // new node created  temp dynamically
    // tail always shifts to the last node i.e the new node(temp) inserted in this case...
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail, Node* &head,int position,int data){

//  this condition is for the case when we try to insert a data at first position of LL(now,we can insert element at 1st position of LL)
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // inserting at Last Position(shifting tail to last position)
    if(temp->next==NULL){
        insertAtTail(tail,data); //check insertAtTail fn
        return;
    }

    // creating a node for d
    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position,Node* &head){

    // deleting first or start node(no previous node so diff method needed)
    if(position == 1){
        //initz. a ptr to head i.e temp
        Node* temp=head;   

        head=head->next;

        // making ptr(temp) that has to be deleted point to NULL otherwise segmentation fault
        temp->next=NULL;
        
        // memory free start node
        delete temp;
    }
    else{
        // deleting any middle or last node(both prev & current node available)
        Node* curr=head;
        Node* prev=NULL; //initz both prev & curr ptrs.

        int cnt=1;

        while(cnt<position){ //until we haven't reached the position that has to be deleted
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        
        //when that position is reached 

        prev->next=curr->next;
        curr->next=NULL; 
        //making ptr(curr) that has to be deleted point to NULL otherwise segmentation fault
        delete curr;
    }
}

void print(Node* &head){
    
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1=new Node(10); //dynamic allocation for new node
    // or Node node1=Node(10);[static allocation]
    // Node fn invoked making i t current obj
    // cout<< node1.data<<endl;
    // cout<< node1.next<<endl; 


// head pointed to node1--> Insertion at head 
    Node* head=node1;  //head is a pointer to node 1
    // print(head);

    // insertAtHead(head,15);
    // print(head);

    // insertAtHead(head,20);
    // print(head);

    // cout<<"above is Insertion at head"<<endl;

// Insertion at tail(new node becomes last node as pointer of old node now points at new node and new node pointer is at NULL thus making it last node && tail pointer always shifts to last node)

    Node* tail=node1;
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,20);
    print(head);
    
    cout<<"above is Insertion at tail"<<endl;


    cout<<"Insert a value(22) at position 3 of LL"<<endl;
    insertAtPosition(tail,head,3,22);
    print(head);

    cout<<"Insert a value(25) at position 1 of LL"<<endl;
    insertAtPosition(tail,head,1,25);
    print(head);

    cout<<"head:- "<<head -> data<<endl;

    insertAtPosition(tail,head,6,30);
    print(head);

    cout<<"tail:- "<<tail -> data<<endl; //{shows tail ptr has shifted succesfully to last node i.e with data=30}

    // deletion of a node
    deleteNode(1,head);
    print(head);

    deleteNode(5,head);
    print(head);

    return 0; 

}