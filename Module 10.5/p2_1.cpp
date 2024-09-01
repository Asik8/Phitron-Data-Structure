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

void Reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next !=j)
    {
        swap(i->data,j->data);
        i = i->next;
        j = j->prev;
    }
    swap(i->data,j->data);
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
    Reverse(head,tail);
    Print(head);
    return 0;
}