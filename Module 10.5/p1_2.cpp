#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l1,l2;
    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        l1.pb(a);
    }
    int b;
    while(true)
    {
        cin>>b;
        if(b == -1) break;
        l2.pb(b);
    }
    if(l1.size() != l2.size()) cout<<"NO\n";
    else
    {
        bool f = true;
        for(int i=0;i<l1.size();i++)
        {
            int v1 = *next(l1.begin(),i);
            int v2 = *next(l2.begin(),i);
            if(v1 != v2) 
            {
                f = false;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}