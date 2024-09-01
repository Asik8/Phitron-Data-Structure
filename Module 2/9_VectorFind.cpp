#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Useful only when you need to check value is there or not don't get any index
    vector<int> v = {1,3,5,2,4,6,8,4,2};
    vector<int> v2 = {1,3,5,2,4,6,8,4,2};
    // find(v.begin(),v.end(),3); // it will show error, because it return pointer not a value. So, we need a iterator to iterate through it. To handle this:- 
    // vector<int>::iterator it; // One Way
    // it = find(v.begin(),v.end(),5);
    // cout<<*it<<endl;

    // auto it = find(v.begin(),v.end(),5); // Another Way
    // Find and not found condition:- 
    // if(it == v.end()) cout<<"Not Found\n";
    // else cout<<"Found\n";

    auto it = find(v2.begin(),v2.end(),10);
    if(it == v2.end()) cout<<"Not Found\n";
    else cout<<"Found\n";

    return 0;
}