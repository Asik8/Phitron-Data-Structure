#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    stack<char>st;
    for(char c : s)
        st.push(c);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return 0;
}