#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

int Count(Node * head)
{
    Node * tmp = head;
    int c=0;
    while(tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}

void Insert_head(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void Insert_Tail(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool Insert_Any(Node *&head,Node *&tail,int pos,int val)
{
    
    if(pos == 0) 
    {
        Insert_head(head,tail,val);
        return true;
    }
    int c = Count(head);
    if(c == pos)
    {
        Insert_Tail(head,tail,val);
        return true;
    }
    Node * newNode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<pos;i++)
    {
        tmp = tmp->next; 
        if(tmp == NULL || tmp->next == NULL)
        {
            return false;
        }
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    return true;
}

void Print(Node *head,Node *tail)
{
    Node * h = head;
    Node *t = tail;
    while(h!= NULL)
    {
        cout<<h->data<<" ";
        h = h->next;
    }
    cout<<endl;
    while(t!= NULL)
    {
        cout<<t->data<<" ";
        t = t->prev;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head = NULL;
    Node *tail = NULL;
    ll t;
    cin >> t;
    while (t--) {
        int x,v;
        cin>>x>>v;
        bool f = Insert_Any(head,tail,x,v);
        if(f) Print(head,tail);
        else cout<<"Invalid"<<endl;
    }

    return 0;
}