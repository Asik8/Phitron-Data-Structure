#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void Insert_Tail(Node *&head,Node *&tail,int val)
{
    Node * newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool Palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next !=j)
    {
        if(i->data != j->data)
        {
            return false;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->data!=j->data) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head = NULL;
    Node *tail = NULL;

    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        Insert_Tail(head,tail,a);
    }
    bool f = Palindrome(head,tail);
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}