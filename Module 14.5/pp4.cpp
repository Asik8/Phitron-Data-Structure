#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    queue<int>q1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    queue<int>q2;
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    stack<int>s;
    while(!q2.empty())
    {
        s.push(q2.front());
        q2.pop();
    }
    while(!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    for(int i=0;i<n;i++)
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
    return 0;
}