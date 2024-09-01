#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    vector <int> v ={1,2,3,4,5};
    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    v.erase(v.begin()+3); // erase 1 element
    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    v.erase(v.begin()+1,v.end()); // multiple element
    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    return 0;
}