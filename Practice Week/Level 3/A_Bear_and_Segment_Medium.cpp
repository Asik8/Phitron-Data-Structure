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
        string s;
        cin>>s;
        ll l = s.length();
        bool f = true;
        ll fst = s.find('1');
        ll sec = s.rfind('1');
        for(int i=fst;i<sec;i++)
        {
            if(s[i] == '0') 
            {
                f = false;
                break;
            }
        }
        ll z= 0;
        for(char c:s) if(c == '0') z++;
        if(!f || z == l)cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}