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
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        bool f = false;
        for(int i=0;i<n;i++)
        {
            if(a==ar[i])
            {
                f = true;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}