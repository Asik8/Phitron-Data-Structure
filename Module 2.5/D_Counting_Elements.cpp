#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin>>n;
    vector <int> v(n),v1;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        auto it = find(v.begin(),v.end(),v[i]+1);
        if (it!=v.end())c++;
    }
    cout<<c<<endl;  
    return 0;
}