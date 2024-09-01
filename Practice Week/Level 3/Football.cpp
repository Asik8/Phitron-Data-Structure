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
        ll n;
        cin >> n;
        vector <ll> v1(n),v2(n);
        for (int i = 0; i < n; i++)  cin >> v1[i];       
        for (int i = 0; i < n; i++)  cin >> v2[i]; 
        ll ma = INT_MIN;      
        for (int i = 0; i < n; i++)
        {
            ll sc = (v1[i]*20)-(v2[i]*10);
            if (sc<0) sc = 0;
            if(sc>ma) ma = sc;
        }      
        cout<<ma<<endl;        
    }
    return 0;
}