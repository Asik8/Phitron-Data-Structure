#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    vector<int> v = {1,3,5,2,4,6,8,4,2,5,9,4,2,4,4,2,5,4,2,2};
    replace(v.begin(),v.end()-1,2,200);
    for(int x:v)
        cout<<x<<" ";
        cout<<endl;

    vector<int> v2 = {1,3,5,2,4,6,8,4,2,5,9,4,2,4,4,2,5,4,2,2};
    replace(v2.begin(),v2.end(),2,200);
    for(int x:v2)
        cout<<x<<" ";
        cout<<endl;

    return 0;
}