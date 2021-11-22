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
        ll n;
        cin >> n;

        string n1, n2;
        cin >> n1 >> n2;

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            string p1 = n1.substr(i, n - i);
            string p2 = n2.substr(i, n - i);
            if (p1 < p2)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}