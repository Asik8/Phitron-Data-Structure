#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l1;
    ll t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x >= 0 && x <= l1.size())
        {
            auto it = l1.begin();
            advance(it, x);
            l1.insert(it, v);
            for (int i = 0; i < l1.size(); i++)
            {
                cout << *next(l1.begin(), i) << " ";
            }
            cout << endl;
            list<int> l2(l1);
            l2.reverse();
            for (int i = 0; i < l2.size(); i++)
            {
                cout << *next(l2.begin(), i) << " ";
            }
            cout << endl;
        }
        else
            cout << "Invalid\n";
    }

    return 0;
}