#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> q1,q2;
    ll n;
    cin >> n;
    while(n--)
    {
        int x;
        cin>>x;
        q1.push(x);
    }    
    int k;
    cin>>k;
    int in=1;
    while(!q1.empty())
    {
        if(in!= k)
        {
            q2.push(q1.front());
            in++;
            q1.pop();
        }
        else 
        {
            q1.pop();
            in++;
        }
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
    return 0;
}