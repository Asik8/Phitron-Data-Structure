#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void InsertTail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void SortDES(Node *head)
{
    for(Node *t1 = head;t1->next != NULL; t1 = t1->next)
    {
        for(Node *t2 = t1->next; t2 != NULL; t2 = t2->next)
        {
            if(t1->data<t2->data)
            {
                swap(t1->data,t2->data);
            }
        }
    }
}

void PrintList(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node *h1 = NULL;
    Node *t1 = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        else
            InsertTail(h1, t1, v);
    }
    SortDES(h1);
    PrintList(h1);
    return 0;
}