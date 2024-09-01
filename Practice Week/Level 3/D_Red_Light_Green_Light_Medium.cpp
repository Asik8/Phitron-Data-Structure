#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,c=0;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x>k) c++;
        }     
        cout<<c<<endl;  
    }

    return 0;
}