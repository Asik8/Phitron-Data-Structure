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

void PreOrder(Node *root) // order is--> root-->left-->right
{
    if(!root) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
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
    PreOrder(root);
    return 0;
}