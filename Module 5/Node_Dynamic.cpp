#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

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

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;

    return 0;
}