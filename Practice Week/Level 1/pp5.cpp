#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

vector<ll> Find_Max_Dis()
{
    int n;
    cin>>n;
    vector<ll>v;
    while(n--)
    {
        int c;
        cin>>c;
        v.pb(c);
    }
    vector<ll> ans;
    for(int i=0;i<v.size()-1;i++)
    {
        int m = *max_element(v.begin()+i+1,v.end());
        ans.pb(m);
    }
    ans.pb(0);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> ans = Find_Max_Dis();
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}