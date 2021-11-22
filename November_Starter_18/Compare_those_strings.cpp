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

        bool bb;
        ll ans = 0;

        bb = n2[n - 1] > n1[n - 1];
        if (bb)
            ans++;

        for (int i = n - 2; i >= 0; i--)
        {
            if (n2[i] > n1[i])
            {
                bb = true;
                ans++;
            }
            else if (n2[i] < n1[i])
            {
                bb = false;
            }
            else
            {
                if (bb)
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}