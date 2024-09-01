#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    cout<<v.max_size()<<endl; // it shows the maximum size that variable has. 
    cout<<"before initialize "<<v.capacity()<<endl; // Shows the maximum capacity
    v.push_back(5); //dynamically add element at the end of the vector
    cout<<"after pushing "<<v.capacity()<<endl; 

    v.push_back(4);
    cout<<"after pushing "<<v.capacity()<<endl; 

    v.push_back(3);
    cout<<"after pushing "<<v.capacity()<<endl; 

    v.push_back(2);
    cout<<"after pushing "<<v.capacity()<<endl; 

    v.push_back(1);
    cout<<"after pushing "<<v.capacity()<<endl; // capacity increases capacity*2
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    v.pop_back(); // remove the last element form the vector
    cout<<"After pop_back\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}