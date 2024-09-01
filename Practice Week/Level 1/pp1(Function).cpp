#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

vector<ll> Find_Min_Numbers()
{
    ll n;
    cin >> n;
    vector <ll> v(n),ans;
    for (int i = 0; i < n; i++)
        cin >> v[i]; 
    for(int i=1;i<n-1;i++)
    {
        if(v[i]<v[i-1] && v[i]<v[i+1])
        {
            ans.pb(v[i]);
        }
    }    
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <ll> v = Find_Min_Numbers();
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}