#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;

    cin>>n;
    queue<int>q1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }

    cin>>m;
    queue<int>q2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q2.push(x);
    }

    queue<int>MergedQueue;
    for(int i=0;i<n;i++)
    {
        MergedQueue.push(q1.front());
        q1.pop();
    }
    for(int i=0;i<m;i++)
    {
        MergedQueue.push(q2.front());
        q2.pop();
    }

    while(!MergedQueue.empty())
    {
        cout<<MergedQueue.front()<<" ";
        MergedQueue.pop();
    } cout<<endl;
    return 0;
}