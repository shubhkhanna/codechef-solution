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
        ll d, x, y, z, e2;
        cin >> d >> x >> y >> z;

        x *= 7;

        e2 = y * d + (7 - d) * z;

        cout << max(x, e2) << "\n";
    }

    return 0;
}