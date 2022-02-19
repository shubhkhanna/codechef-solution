#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        if (x % k == 0 || (n + 1 - x) % k == 0)
        {
            YES;
        }
        else
        {
            NO;
        }
    }

    return 0;
}