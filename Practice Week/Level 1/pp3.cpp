#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    vector<ll>v1;
    int t =q;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        if(x == 1)
        {
            if(v1.size() == 0 || v1.size() == 1)v1.pb(n);
            else v1.insert(v1.begin()+1,n);
        }
        else if(x == 2)
        {
            if(v1.size() == 0) v1.insert(v1.end(),n);
            else v1.insert(v1.end()-1,n);
        }
    }
    for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}