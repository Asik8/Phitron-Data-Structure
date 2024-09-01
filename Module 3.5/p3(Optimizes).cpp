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
    sort(ar,ar+n);
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        bool f = false;
        int l=0,h=n-1;
        while(l<=h)
        {
            int m = (l+h)/2;
            if(a==ar[m])
            {
                f = true;
                break;
            }
            else if(ar[m]>a)
                h = m-1;
            else 
                l = m+1;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}