#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// Iterative version
ll power(ll n, ll m)
{
    ll ans = 1;
    n %= MOD;
    while (m > 0)
    {
        // if m is odd
        if (m & 1)
            ans = (ans * n) % MOD;
        n = (n * n) % MOD;
        m >>= 1;
    }
    return ans;
}

// Recursive Version
ll rpower(ll n, ll m)
{
    if (m == 0)
        return 1;

    ll ans = (rpower(n, m / 2)) % MOD;

    if (m & 1) //m is odd
        return (((ans * ans) % MOD) * n) % MOD;
    else //m is even
        return (ans * ans) % MOD;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll res = power(2, n) - 1;
        cout << power(res, m) << endl;
    }

    return 0;
}