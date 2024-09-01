#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    vector <int> v(10,100);
    vector <int> v2;
    // cout<<v.empty()<<endl; // return 0 means not empty
    // cout<<v2.empty()<<endl; // returns 1 means empty

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    v.resize(3); // remove other elements from vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    // v.resize(10); // remove other elements from vector
    v.resize(10,20); //(gave 20 to add 20 on empty boxes)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}