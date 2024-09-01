#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        v[i] = i+1;

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}