#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node* prev;

    node(int d){
        this ->data =d;
      
        this->next=NULL;
    }


    ~node(){
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

void insertNode(node* &tail,int element, int d){
    if(tail==NULL){
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node* curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }
        node* temp= new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}


void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty";
        return;
    }
    do{

        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp); 
    cout<<endl;
}

void deleteNode(node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty , please check again"<<endl;
        return ;
    }
    else{
        node* prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr==prev){
                tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
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
bool detectLoop(node* head){
    if(head==NULL){
        return false;
    }
    map<node*,bool> visited;
    node* temp=head;
    while(temp!=NULL){
        
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
return false;
}
int main(){
    node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,4,8);
    print(tail);

    deleteNode(tail,4);
    print(tail);
    if(isCircular(tail)){
        cout<<"Linkedlist is circular in nature "<<endl;
    }
    else{
        cout<<"Not Circular";
    }
    
}