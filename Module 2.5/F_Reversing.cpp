#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}