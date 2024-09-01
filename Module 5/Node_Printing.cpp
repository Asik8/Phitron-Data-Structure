#include <bits/stdc++.h>
using namespace std;

class Node              // initialize Node
{
    public:
    int data;
    Node *next;

    Node (int data)     // Constructor
    {
        this->data = data;
        next = NULL;
    }
};

int main() {

    Node* head = new Node(5);
    Node* a = new Node(10);
    head->next = a;         // here we used a because a is a pointer

    // Printing Link_List:
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    return 0;
}