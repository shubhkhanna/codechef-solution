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
        ll a, b, x, y, k;
        cin >> a >> b >> x >> y >> k;

        a = a + (k * x);
        b = b + (k * y);

        if (a < b)
        {
            cout << "PETROL";
        }
        else if (a == b)
        {
            cout << "SAME PRICE";
        }
        else
        {
            cout << "DIESEL";
        }

        cout << endl;
    }
    return 0;
}