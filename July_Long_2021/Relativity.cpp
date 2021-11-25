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
        int g, c, ans;
        cin >> g >> c;

        ans = (c * c) / (2 * g);

        cout << ans << "\n";
    }

    return 0;
}