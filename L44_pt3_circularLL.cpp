#include<iostream>
using namespace std;

// circular LL--> we don't need a head pointer for a CLL as its tail pointer can be used for both pointing at head & tail simultaneously, using tail->next points to head of CLL
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;

    }

    // destructor
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

// we aim at inserting a node with the "data" given by user after the node with the "element"

void insertNode(Node* &tail,int element,int data){
    // assuming that the element is present in the list

    // case-1: inserting node when list is empty
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        // non-empty list & assuming that the element is present in the list

        Node* curr=tail;

        while(curr->data != element){
            curr=curr->next;
        }

        // element found-> curr is representing element wala node
        // logic in img in notes
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
    
void print(Node* tail)
{ 

// start from tail i.e element with data 9 then go to start and print all nodes before tail
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
    // we execute code inside do and then check for condition in while again and again until condition becomes false

        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    
    //empty list
    if(tail==NULL){
        cout<<"List is empty,please check again"<<endl;
        return;
    } 
    else{
        // non-empty

        // assuming that "value" is present in the Linked List that has to be deleted
        Node* prev= tail;
        Node* curr=prev->next;

        while(curr->data !=value){
            prev=curr;
            curr=curr->next;
        }

        // 1 node Linked List #logic in notes img
        if(curr==prev){
            tail=NULL;
        }

        // >=2 Node LL(if tail is at current and it has to be deleted then shift tail to prev before that)
        else if(tail==curr){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main()
{
    Node* tail=NULL;

    //empty list in first case so take element as random
    insertNode(tail,5,3); 
    print(tail);

    // insertNode(tail,3,5); 
    // print(tail);

    // insertNode(tail,5,7); 
    // print(tail);

    // insertNode(tail,7,9); 
    // print(tail);

    // insertNode(tail,9,10); 
    // print(tail);

    // insertNode(tail,3,4);  
    // print(tail);

    // deletion of a node with single node in LL
    deleteNode(tail,3);
    print(tail);

    // deletion of any node in LL
    // deleteNode(tail,9);
    // print(tail);







}