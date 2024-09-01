#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum =0;
    for(int i=0;i<n;i++)
        sum+=v[i];
    int prefixSum = 0;
    for(int i=0;i<n;i++)
    {
        if(prefixSum == sum-v[i]-prefixSum)
        {
            cout<<i<<endl;
            return 0;
        }
        prefixSum+=v[i];
    }
    cout<<"No equilibrium index found!\n";
    return 0;
}


