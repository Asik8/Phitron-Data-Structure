#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define py cout<<"YES\n"
#define pn cout<<"NO\n"

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

bool check_Duplicate(Node * head)
{
    Node *t1 = head;
    while(t1->next!=NULL)
    {
        if(t1->data > t1->next->data) return false;
        t1 = t1->next;
    }
    return true;
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
    bool f = check_Duplicate(head);
    if(f) py;
    else pn;
    return 0;
}