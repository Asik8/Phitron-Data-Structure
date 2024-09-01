#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // vector <type> name(size,value); // Declare
    
    // vector <int> v; // Type 1
    // vector <int> v(5); // Type 2
    // vector <int> v(5,10); // Type 3
    // vector <int> v(5,10); // Type 4
    // vector <int> v2(v);
    // int a[5] = {1,2,3,4,5}; // Type 5
    // vector <int> v2(a,a+5);
    vector <int> v2={1,2,3,4,5}; // Type 6

    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
    { 
        cout<<v2[i]<<" ";
    }


    return 0;
}