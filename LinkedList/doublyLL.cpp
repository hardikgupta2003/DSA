#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node* prev;

    node(int d){
        this ->data =d;
        this->prev=NULL;
        this->next=NULL;
    }


    ~node(){
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void print (node * head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(node* head){

    int length =0;
        node* temp=head;
    while(temp != NULL){
     length++;
        temp=temp->next;
    }
    return length;
}
void insertAthead(node * &  head,int d){
    node* temp= new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(node* &tail,int d){
    node* temp= new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

 void insertAtPosition(node* &head,node * &tail,int position,int d){
    if(position==1){
        insertAthead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        cnt++;
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    node* nodeToInsert=new node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
bool isCircular(node* head){
    if(head==NULL){
        return true;
    }
    node*temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;
    }
    return false;
}
void deleteNode(int position,node * &head){
    if(position==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
          cnt++;

            
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    node * node1 = new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);

// cout<<"length of the linked list : "<<getLength(head)<<endl;
//     insertAthead(head,20);
//     print (head);
// cout<<"length of the linked list : "<<getLength(head)<<endl;
//  insertAthead(head,30);
//     print (head);
// cout<<"length of the linked list : "<<getLength(head)<<endl;
//  insertAthead(head,40);
//     print (head);
// cout<<"length of the linked list : "<<getLength(head)<<endl;
//      insertAthead(head,50);
//     print (head);
//     cout<<"length of the linked list : "<<getLength(head)<<endl;

cout<<"length of the linked list : "<<getLength(head)<<endl;
    insertAtTail(tail,20);
    print (head);
cout<<"length of the linked list : "<<getLength(head)<<endl;
 insertAtTail(tail,30);
    print (head);
cout<<"length of the linked list : "<<getLength(head)<<endl;
 insertAtTail(tail,40);
    print (head);
cout<<"length of the linked list : "<<getLength(head)<<endl;
     insertAtTail(tail,50);
    print (head);
    cout<<"length of the linked list : "<<getLength(head)<<endl;

    insertAtPosition(head,tail,2,90);
    print (head);
      cout<<"length of the linked list : "<<getLength(head)<<endl;


    // deleteNode(6,head);
    // deleteNode(1,head);

    // print(head);

       if(isCircular(tail)){
        cout<<"Linkedlist is circular in nature "<<endl;
    }
    else{
        cout<<"Not Circular";
    }
}