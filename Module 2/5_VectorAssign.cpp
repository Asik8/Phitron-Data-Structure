#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    vector <int> x ={1,2,3,4,5};
    vector <int> v ={1,2};
    v = x;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}