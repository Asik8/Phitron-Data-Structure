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

// here we can't assign a value dirrectly in the head. ALthough head is null. So we need to derefference it. Systext will be: Node *&head;

void Insert_In_Tail(Node *&head,int val)    // Derefferencing head to update head if the head is empty.
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;    // updating head with the newNode if head is empty.
        return;            // Return from the function to avoide infinite loop.
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void Print_Linked_List(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    int n =100;
    Node* head = NULL;
    Insert_In_Tail(head,n);
    Print_Linked_List(head);
    return 0;
}