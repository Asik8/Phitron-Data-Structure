#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,mi=INT_MAX,mx = INT_MIN;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<mi) mi = v[i];
        if(v[i]>mx) mx = v[i];
    }
    ll sum = mi+mx;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>0)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i]+v[j] == sum && i!=j)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    v[i] = 0;
                    v[j] = 0;
                    break;
                }
            }
        }
    }
    return 0;
}