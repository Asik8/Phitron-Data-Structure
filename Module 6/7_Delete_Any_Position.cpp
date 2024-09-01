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

void Insert_at_head(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<"Node Added\n";
}

void Insert_In_Tail(Node *&head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        cout<<"Value Inserted Successfully\n";
        return;
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<"Value Inserted Successfully\n";
}

void Insert_any_position(Node *&head,int pos,int val)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty\n";
        return;
    }
    Node *tmp = head;
    for(int i=1;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
    {
        Insert_In_Tail(head,val);
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"Value Inserted Successfully\n";
}

void Delete_at_Position(Node*head,int pos)
{
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    Node* deletePos = tmp->next;
    tmp->next = tmp->next->next;
    delete deletePos;
    cout<<"Node Deleted Successfully.\n"; 
}

void Delete_Head(Node* &head)
{
    Node*d = head;
    head = head->next;
    delete d; 
    cout<<"Head Deleted Successfully\n";
}

void Print_Linked_List(Node* head)
{
    if(head == NULL)
    {
        cout<<"Your Linked List is empty\n";
        return;
    }
    cout<<"Your Linked List is: ";
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    while(1)
    {
        cout<<"Op-1: Insert a Value at tail\n";
        cout<<"Op-2: Insert a Value any position\n";
        cout<<"Op-3: Insert at Head\n";
        cout<<"Op-4: Delete at Position\n";
        cout<<"Op-5: Delete head\n";
        cout<<"Op-7: Print Linked List\n";
        int op;
        cout<<"Enter an Option: ";
        cin>>op;
        if(op == 1)
        {
            int n;
            cout<<"Enter the Value: ";
            cin>>n;
            Insert_In_Tail(head,n);
        }
        else if(op == 2)
        {
            int pos,val;
            cout<<"Enter the Position: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>val;
            if(pos == 0) Insert_at_head(head,val);
            else Insert_any_position(head,pos,val);            
        }
        else if(op == 3)
        {
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            Insert_at_head(head,val);
        }
        else if(op == 4)
        {
            int pos;
            cout<<"Enter the Position: ";
            cin>>pos;
            if(pos == 0) Delete_Head(head);
            else Delete_at_Position(head,pos);
        }
        else if(op == 5)
        {
            Delete_Head(head);
        }
        else if(op == 7)
        {
            Print_Linked_List(head);
        }
        else break;
    }
    return 0;
}