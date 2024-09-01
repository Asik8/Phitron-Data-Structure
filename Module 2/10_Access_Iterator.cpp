#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    vector <int> v = {1,2,3,4,56,75,4,898};

    // iterate 1st element
    // cout<<v[0]<<endl;
    // cout<<v.front()<<endl;

    // iterate Last element
    // cout<<v[v.size()-1]<<endl;
    // cout<<v.back()<<endl;

    // Vector Iterator:- 
    // vector<int>::iterator it; //One Way
    // for(it = v.begin();it<v.end();it++)
    //     cout<<*it<<" ";
    // cout<<endl;

    for(auto it = v.begin();it<v.end();it++) //Another Way
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}