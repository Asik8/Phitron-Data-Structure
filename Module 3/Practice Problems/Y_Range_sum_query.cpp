#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n), v_s(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    v_s[0] = v[0];
    for (int i = 1; i < n; i++)
        v_s[i] = v_s[i - 1] + v[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        ll sum = 0;
        if (l>0) sum = v_s[r-1]-v_s[l-1];
        else sum = v_s[r-1];
        cout << sum << endl;
    }

    return 0;
}