#include <iostream>
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

    ~node(){
        int value =this ->data;
        if(this->next!=NULL){
            delete next;
            this ->next=NULL;
        }
        cout<<"memory is free for node with data "<<value <<endl;
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

void deleteNode(int position,node* &head){
    if(position==1){
        node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while(cnt<=position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
   node *n1 = new node(23);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    node *head = n1;
    node *tail = n1;
    // print(head);
    // insertAtHead(head,12);
    // insertAtHead(head,15);
    // print(head);
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);
    insertAtPosition(tail, head, 1, 895498);
    print(head);

    deleteNode(1,head);
    print(head);


}