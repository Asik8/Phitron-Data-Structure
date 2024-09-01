#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    cin>>s;
    vector <int> v(26,0);
    for(char c:s)
    {
        v[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]>0)
        {
            char a = 'a'+i;
            cout<<a<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}