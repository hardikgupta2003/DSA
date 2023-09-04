#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    node *temp = head;
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
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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
int main()
{
    node *n1 = new node(23);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    node *head = n1;
    node *tail = n1;
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
    // tail->next=head->next;

    insertAtPosition(tail, head, 4, 22);
    // print(head);
    insertAtPosition(tail, head, 1, 88);
    // print(head);

       if(isCircular(tail)){
        cout<<"Linkedlist is circular in nature "<<endl;
    }
    else{
        cout<<"Not Circular"<<endl;
    }
    if(detectLoop(head)){
        cout<<"loop is there ."<<endl;
    }
    else{
        cout<<"loop is not there."<<endl;
    }
}
