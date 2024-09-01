#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void Insert_at_tail(Node* &head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->next = NULL;
    cout<<"Node Inserted Successfully\n";  
}

void Insert_head(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
    cout<<"Item Inserted Successfully\n";
}

int count_size(Node* head)
{
    Node * h = head;
    int c = 0;
    while(h!=NULL)
    {
        c++;
        h = h->next;
    }
    return c;
}

void Insert_any_position(Node*head,int pos,int val)
{
    Node * p = head;
    for(int i=1;i<pos;i++)
    {
        p = p->next;
        if(p->next == NULL)
        {
            cout<<"Invalid Index\n";
            return;
        }
    }
    if(p->next == NULL)
    {
        Insert_at_tail(head,val);
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = p->next;
    p->next = newNode;
    cout<<"Node Inserted Successfully\n";
}

void Delete_head(Node* &head)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<"Head Deleted Successfully\n";
}

void Delete_tail(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is already empty\n";
        return;
    }

    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        cout<<"Linked List has only one Node\n";
        return;
    }

    Node*tmp = head;
    while(tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    delete tmp->next;
    tmp->next = NULL;
    cout<<"Tail Deleted Successfully\n";
}

void Delete_Any_Position(Node* head,int pos,int val)
{
    Node *tmp = head;
    for(int i=1;i<pos;i++)
    {
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
    {
        Delete_tail(head);
        cout<<"Your Desired node deleted successfully\n";
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"Your Desired node deleted successfully\n";
}

void Print(Node* head)
{
    if (head == NULL) 
    {
        cout<<"Linked List is Empty";
        return;
    }
    Node* p = head;
    cout<<"Linked List is: ";
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    int c;
    while(true)
    {
        cin>>c;
        if(c<0) break;
        Insert_at_tail(head,c);
    }
    cout<<"Size of Linked List: ";
    // counting and printing size
    int cont = count_size(head);
    cout<<cont<<endl;

    // printing Linked List
    Print(head);

    // Insert Head
    int val;
    cin>>val;
    Insert_head(head,val);
    Print(head);

    // Insert Tail
    cin>>val;
    Insert_at_tail(head,val);
    Print(head);

    // Insert at specific Position
    int pos;
    cin>>pos>>val;
    Insert_any_position(head,pos,val);
    Print(head);

    // Delete Head
    Delete_head(head);
    Print(head);

    // Delete Tail
    Delete_tail(head);
    Print(head);

    // Delete any Position
    cin>>pos,val;
    if(pos == 0) Delete_head(head);
    else Delete_Any_Position(head,pos,val);
    Print(head);
    
    return 0;
}