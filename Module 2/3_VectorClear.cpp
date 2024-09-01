#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int a[5] = {1,2,3,4,5};
    vector <int> v(a,a+5);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    v.clear();
    cout<<"capacity after clear "<<v.capacity()<<endl;
    cout<<"Size after clear "<<v.size()<<endl;
    // clear just the clear the size not clear the memory. after clear the vector we can access the values of the vector.
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
    for(int i=0;i<v.capacity();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;
    return 0;
}