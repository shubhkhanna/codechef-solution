#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastIO;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        m = min(m, (1ll << (n - 1)));
        ll ans = ((1 << n) - 1) * 2 * m;

        cout << ans << '\n';
    }

    return 0;
}