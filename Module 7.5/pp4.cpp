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

void PrintMax(Node *head)
{
    Node * tmp = head;
    int ma = INT_MIN;
    while(tmp != NULL) 
    {
        if(tmp->data>ma) ma = tmp->data;
        tmp = tmp->next;
    }
    cout <<ma<<endl;
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
    PrintMax(h1);
    return 0;
}