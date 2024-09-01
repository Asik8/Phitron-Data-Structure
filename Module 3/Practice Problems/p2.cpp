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
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector <int> v;
    v.push_back(0);
    int x = 0;
    for(int i=0;i<n;i++)
    {
        x += ar[i];
        v.push_back(x);
    }
    for(int i=0;i<v.size()-1;i++)
        cout<<v[i]<<" ";
    return 0;
}