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
    stack<int>q1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    stack<int>q2;
    while(!q1.empty())
    {
        q2.push(q1.top());
        q1.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    cout<<endl;
    return 0;
}