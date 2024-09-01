#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    vector <int> v ={1,2,3,4,5};

    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    // Insert
    v.insert(v.begin()+2,10); // starting vector + index, value to be insetred
    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    // If wnat to insert array or vecctor:
    vector <int> a = {-1,15,41,545,4};
    v.insert(v.begin()+2,a.begin(),a.end()); 
    for(int x:v)
    {
        cout<<x<<" ";
    }cout<<endl;

    return 0;
}