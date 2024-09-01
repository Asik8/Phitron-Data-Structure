#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for(int i=1;i<n-1;i++)
    {
        int s1 = 0,s2 = 0;
        for(int j=0;j<i;j++)
            s1+=ar[j];

        for(int j=i+1;j<n;j++)
            s2+=ar[j];

        if(s1 == s2)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}