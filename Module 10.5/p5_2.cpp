#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    list<int>l;
    int a;
    while(true)
    {
        cin>>a;
        if(a == -1) break;
        l.pb(a);
    }
    l.sort();
    for(int i=0;i<l.size();i++)
    {
        cout<<*next(l.begin(),i)<< " ";
    }    
    cout<<endl;
    return 0;
}