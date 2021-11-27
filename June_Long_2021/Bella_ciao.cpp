#include <bits/stdc++.h>
#define ll long long int
using namespace std;
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
        ll D, d, P, Q, n, ans = 0;
        cin >> D >> d >> P >> Q;
        n = D / d;

        ans = (n % 2 == 0) ? (d * ((n / 2) * (2 * P + (n - 1) * Q))) : (d * (n * (P + ((n - 1) / 2) * Q)));
        ans += (D % d) * (P + n * Q);

        cout << ans << "\n";
    }

    return 0;
}