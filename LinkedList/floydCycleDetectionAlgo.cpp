#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node*temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;
    }
    return false;
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
return false;
}
Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow =head;
    Node* fast =head;
        while(slow!=NULL &&fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow =slow->next; 
            if(slow==fast){
                return slow;
            }

        }
        return NULL;
}
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow=head;
 while (slow!=intersection)
 {
   slow=slow->next;
   intersection=intersection->next;
 }
    return slow;   
}
void removeLoop(Node *head){
    if(head==NULL){
        return;
    }
    Node*startOfLoop=getStartingNode(head);
    Node* temp=startOfLoop;
    while(temp->next!=startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    Node *n1 = new Node(10);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    Node *head = n1;
    Node *tail = n1;
    // print(head);
    // insertAtHead(head,12);
    // insertAtHead(head,15);
    // print(head);
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 15);
    // print(head);


    // for checking the loop
    tail->next=head->next; 

    insertAtPosition(tail, head, 4, 22);
    // print(head);
    // insertAtPosition(tail, head, 1, 88);
    // print(head);

       if(isCircular(tail)){
        cout<<"Linkedlist is circular in nature "<<endl;
    }
    else{
        cout<<"Not Circular"<<endl;
    }
    // if(detectLoop(head)){
    //     cout<<"loop is there ."<<endl;
    // }
    // else{
    //     cout<<"loop is not there."<<endl;
    // }
    if(floydDetectLoop(head)!=NULL){
 cout<<"loop is there ."<<endl;
    }
    else{
        cout<<"loop is not there."<<endl;
    }


    Node* loop=getStartingNode(head);
        cout<<"loop starts at : "<<loop->data<<endl;

        removeLoop(head);
        print(head);
    }
