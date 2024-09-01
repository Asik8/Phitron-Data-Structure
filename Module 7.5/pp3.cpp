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

void PrintMiddle(Node *head)
{
    Node *tmp = head;
    int c=0;
    while(tmp!=NULL)
    {
        c++;
        tmp = tmp->next;
    } 
    tmp = head;
    if(c%2==1)
    {
        int mid = (c/2)+1;
        for(int i=1;i<=c;i++) 
        {
            if(i==mid) break;
            tmp = tmp->next;
        }
        cout << tmp->data << endl;
    }
    else 
    {
        int m1 = c/2;
        int m2 = (c/2)+1;
        for(int i=1;i<=c;i++) 
        {
            if(i==m1) break;
            tmp = tmp->next;
        }
        cout << tmp->data << " ";
        cout<<tmp->next->data<<endl;
    }
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
    PrintMiddle(h1);
    cout << endl;
    return 0;
}