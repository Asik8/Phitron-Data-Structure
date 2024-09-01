#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int t;
    cin >> t;
    int l = 0, h = n - 1;
    bool f = false;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (ar[mid] > t)
            h = mid - 1;
        else if (ar[mid] < t)
            l = mid + 1;
        else
        {
            f = true;
            break;
        }
    }
    if (f)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}