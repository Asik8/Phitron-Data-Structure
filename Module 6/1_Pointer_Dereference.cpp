#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

void f(int *ptr)    // here p and ptr pointing on a same location. their address is not same.
{
    *ptr = 20;      // changing value of val
    ptr = NULL;     // making ptr NULL, which does not affect p pf the main function
}

int main() {
    int val = 5;
    int *p = &val;
    f(p);           // passing the pointer in the f function.
    cout<<*p<<endl; // printing val using pointer.

    return 0;
}