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

void Print(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

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

bool Compare(Node * h1,Node*h2)
{
    Node *t1 = h1;
    Node * t2 = h2;
    int c1 = Count(h1);
    int c2 = Count(h2);
    if(c1 != c2) return false;
    while(t1!=NULL)
    {
        if((t1->data != t2->data) || (t1 != NULL && t2 == NULL) || (t1 == NULL && t2 != NULL))
        return false;
        t1 = t1->next;
        t2 = t2->next;
    } 
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *h1 = NULL;
    Node *h2 = NULL;
    Node *t1 = NULL;
    Node *t2 = NULL;

    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        Insert_Tail(h1,t1,a);
    }
    int b;
    while(true)
    {
        cin>>b;
        if(b == -1) break;
        Insert_Tail(h2,t2,b);
    }
    bool f = Compare(h1,h2);
    if(f) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}