#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node // initialize Node
{
    public:
    int data;
    Node *next;

    // Type-1:
    // Node (int v)     // Constructor
    // {
    //     data = v;
    //     next = NULL;
    // }

    // Type-2:
    Node (int data)     // Constructor
    {
        this->data = data;
        next = NULL;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node a(5);      // Initializing node data
    Node b(10);
    a.next = &b;    // Inserting next node address

    cout<<a.data<<endl;
    cout<<a.next->data<<endl;

    return 0;
}