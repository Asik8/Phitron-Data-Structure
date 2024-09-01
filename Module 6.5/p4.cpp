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

void Insert_tail(Node* &head,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL) tmp = tmp->next;
    tmp->next = newNode;
    newNode->next = NULL;
}

void Insert_Head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

bool Insert_any_Prosition(Node *&head,int pos,int val)
{
    if (pos == 0) 
    {
        Insert_Head(head,val);
        return true;
    }

    Node* tmp = head;
    for(int i=1;i<pos;i++) 
    {
        if(tmp ->next == NULL || tmp == NULL) 
        {
            cout<<"Invalid\n";
            return false;
        }
        tmp = tmp->next;
    }
    if(tmp == NULL)
    {
        cout<<"Invalid\n";
        return false;
    }
    if(tmp->next == NULL) 
    {
        Insert_tail(head,val);
        return true;
    }
    Node * newNode = new Node(val);
    newNode -> next = tmp->next;
    tmp->next = newNode;
}

void Print(Node * head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    int n;
    while(true)
    {
        cin>>n;
        if(n == -1) break;
        Insert_tail(head,n);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        bool f = Insert_any_Prosition(head,pos,val);
        if(f) Print(head);
    }
    return 0;
}