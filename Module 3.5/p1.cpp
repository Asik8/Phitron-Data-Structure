#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> CumulativeSum(vector<ll>v,int n)
{
    vector <ll> sum(n);
    sum[0] = v[0];
    for(int i=1;i<n;i++)
        sum[i] = sum[i-1]+v[i];
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <ll> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    vector<ll>v = CumulativeSum(ar,n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}