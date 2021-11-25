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
        ll e, k;
        cin >> e >> k;

        ll count = 0;
        float ans;

        while (e > 0)
        {
            ans = float(e / k);
            count++;
            e = ans;
        }
        cout << count << endl;
    }

    return 0;
}