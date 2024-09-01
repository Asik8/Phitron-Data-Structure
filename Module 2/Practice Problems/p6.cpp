#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(string x:s)
    {
        if(x[0]>='a' && x[0]<='z')
            x[0]-=32;
        cout<<x<<endl;
    }

    return 0;
}