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

void PrintReverse(Node *tmp)
{
    if(tmp == NULL) return;
    PrintReverse(tmp->next);
    cout << tmp->data << " ";
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
    PrintReverse(h1);
    cout << endl;
    return 0;
}