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
        int a,b;
        cin>>a>>b;
        if(a<=b && abs(a-b)<=2) cout<<"YES\n";
        else if(a>b && a-b == 1) cout<<"YES\n";
        else cout<<"NO\n";    
    }

    return 0;
}