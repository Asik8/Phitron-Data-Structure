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

void InsertTail(Node * &head,Node *&tail,int v)
{
    Node * newNode = new Node (v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int Count(Node * head)
{
    int c =0;
    Node *tmp = head;
    while(tmp!=NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}

int main() {
    Node *h1 = NULL;
    Node *t1 = NULL;
    Node *h2 = NULL;
    Node *t2 = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        else InsertTail(h1,t1,v);
    }
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        else InsertTail(h2,t2,v);
    }
    int a = Count(h1);
    int b = Count(h2);
    if(a==b) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}