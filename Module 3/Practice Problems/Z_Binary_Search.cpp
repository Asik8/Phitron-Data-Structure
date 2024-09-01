#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n>>q;

    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    
    while(q--)
    {
        ll a;
        cin>>a;
        int l = 0,h = n-1;
        bool f = false;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(v[mid] >a)
                h = mid-1;
            else if(v[mid]<a)
                l = mid+1;
            else
            {
                f = true;
                break;
            }
        }
        if(f) cout<<"found\n";
        else cout<<"not found\n";
    }

    return 0;
}