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
    stack<int>q1;
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

    if(q1.size() != q2.size()) cout<<"NO\n";
    else
    {
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(q1.top() != q2.front())
            {
                f = false;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}