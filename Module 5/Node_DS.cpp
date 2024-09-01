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
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node a,b;       // Declaring Node
    a.data = 5;     // Inserting value
    a.next = &b;    // Inserting address of the next node
    b.data = 10;
    b.next = NULL;

    // Printing Node Data

    // Type-1: 
    cout<<a.data<<endl;
    cout<<b.data<<endl;

    // Type-2:
    // cout<<a.data<<endl;
    // cout<<a.next->data<<endl;

    return 0;
}