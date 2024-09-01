#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> st;
    ll n;
    cin >> n;
    while(n--)
    {
        int x;
        cin>>x;
        st.push(x);
    }    
    int k;
    cin>>k;
    while(st.size()>k) st.pop();
    cout<<st.top()<<endl;   
    return 0;
}