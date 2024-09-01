#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node {
public:
    ll data;
    Node *left;
    Node *right;

    Node(ll data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void Print_LevelOrder(Node *root) // order is--> Level Wise left--> right
{
    if(!root) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        cout<<f->data<<" ";
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *a = new Node(10);
    Node * root = a;
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    Print_LevelOrder(root);
    return 0;
}