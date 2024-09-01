#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    v.resize(20,0);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    int a = v.empty();
    // cout<<a<<endl;
    if(a == 0) cout<<"Vector is Empty.\n";
    else cout<<"Vector is not Empty.\n";

    v.resize(10,100);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<10;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}