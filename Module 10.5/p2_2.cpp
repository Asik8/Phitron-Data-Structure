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
    l1.reverse();
    for(int i=0;i<l1.size();i++)
    {
        cout<<*next(l1.begin(),i)<<" ";   
    }
    cout<<endl;
    return 0;
}