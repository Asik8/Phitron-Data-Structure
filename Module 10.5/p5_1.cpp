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

void Insert_Tail(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void Sort(Node *head)
{
    for(Node *tmp = head;tmp->next != NULL;tmp = tmp->next)
    {
        for(Node *t = tmp->next;t!= NULL;t = t->next)
        {
            if(tmp->data>t->data) swap(tmp->data,t->data);
        }
    }
}

void Print(Node *head)
{
    Node * h = head;
    while(h!= NULL)
    {
        cout<<h->data<<" ";
        h = h->next;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head = NULL;
    Node *tail = NULL;

    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        Insert_Tail(head,tail,a);
    }
    Sort(head);
    Print(head);    
    return 0;
}