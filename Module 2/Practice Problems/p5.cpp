#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int val,new_val;
    cin>>val>>new_val;

    for (int i = 0; i < n; i++)
        if(v[i] == val) v[i] = new_val;

    for (int i = 0; i < n; i++)
        cout<<v[i]<<" ";
    cout<<endl; 

    int find_val;
    cin>>find_val;
    bool f = false;
    int ind = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == find_val)
        {
            f = true;
            ind = i;
            break;
        }
    }
    if(f) cout<<ind<<endl;
    else cout<<"Value not found\n";

    return 0;
}