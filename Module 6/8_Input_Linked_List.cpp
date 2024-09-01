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

void Insert_In_Tail(Node *&head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        cout<<"Value Inserted Successfully\n";
        return;
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<"Value Inserted Successfully\n";
}

void Print_Linked_List(Node* head)
{
    if(head == NULL)
    {
        cout<<"Your Linked List is empty\n";
        return;
    }
    cout<<"Your Linked List is: ";
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    int val;
    Node* head = NULL;
    while(1)
    {
        cin>>val;
        if(val>=0)
        {
            Insert_In_Tail(head,val);
        }
        else break;
    }
    Print_Linked_List(head);
    return 0;
}