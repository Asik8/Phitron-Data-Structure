#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l1;
    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        l1.pb(a);
    }
    list <int> l2(l1);
    l2.reverse();
    if(l1 == l2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}