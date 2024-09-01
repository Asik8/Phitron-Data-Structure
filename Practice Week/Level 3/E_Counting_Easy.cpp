#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    if(a<=b)cout<<abs(a-b)+1<<endl;
    else cout<<"0\n";
    return 0;
}