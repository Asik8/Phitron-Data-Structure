#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll ar[n];
    vector <ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    v[0] = ar[0];
    for(int i=1;i<n;i++)
        v[i] = v[i-1]+ar[i];

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    
    return 0;
}