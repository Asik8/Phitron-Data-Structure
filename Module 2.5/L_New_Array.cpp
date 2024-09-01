#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}