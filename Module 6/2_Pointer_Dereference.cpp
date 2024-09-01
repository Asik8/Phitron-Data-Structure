#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

void f(int *&ptr)    // here p and ptr pointing on a same location. their address is same. Because we are dereferencing pointer p.
{
    *ptr = 20;      // changing value of val
    ptr = NULL;     // making ptr NULL, which does not affect p pf the main function. after commenting this line code will work normally. Else nothing will be there as output.
}

int main() {
    int val = 5;
    int *p = &val;
    f(p);           // passing the pointer in the f function.
    cout<<*p<<endl; // printing val using pointer.
    cout<<val<<endl; // p has the address of val. we changed the address into NULL. So, nothing will be printed.
    return 0;
}