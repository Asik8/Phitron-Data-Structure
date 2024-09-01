#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

vector<ll> Find_Sum(vector<ll>v,int n)
{
    vector <ll> Sum(n+1,0);
    ll l=1;
    for(int i=n-1;i>=0;i--) 
    {
        Sum[l] = Sum[l-1]+v[i];
        l++;
    }
    return Sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector <ll> v(n),Sum;
    for (int i = 0; i < n; i++)
        cin >> v[i]; 
    Sum = Find_Sum(v,n);
    for(int i=Sum.size()-2;i>=0;i--) cout<<Sum[i]<<" ";
    cout<<endl;
    return 0;
}