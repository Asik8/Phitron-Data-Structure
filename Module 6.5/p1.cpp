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

int count(Node * head)
{
    Node * tmp = head;
    int c = 1;
    while(tmp->next != NULL) 
    {
        c++;
        tmp = tmp->next;
    }
    return c;
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
    int c = count(head);
    cout<<c<<endl;
    return 0;
}