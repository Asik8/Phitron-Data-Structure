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

void Print_Middle_Values (Node * head)
{
    Node * tmp = head;
    int c = 1;
    while(tmp->next != NULL) 
    {
        c++;
        tmp = tmp->next;
    }
    if(c%2==1)
    {
        int pos = c/2+1;
        int n=0;
        tmp = head;
        while(tmp != NULL)
        {
            n++;
            if(n==pos) 
            {
                cout<<tmp->data<<endl;
                return;
            }
            tmp = tmp->next;
        }
    }
    else
    {
        int pos = c/2;
        int pos1 = c/2+1;
        int n=0;
        tmp = head;
        while(tmp != NULL)
        {
            n++;
            if(n==pos) cout<<tmp->data<<" ";
            if(n==pos1) 
            {
                cout<<tmp->data<<endl;
                return;
            }
            tmp = tmp->next;
        }
    }
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
    Print_Middle_Values(head);
    return 0;
}