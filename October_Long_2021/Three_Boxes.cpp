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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a + b + c) <= d)
        {
            cout << 1;
        }
        else if (((a + b) <= d || (b + c) <= d) && (c <= d || a <= d))
        {
            cout << 2;
        }
        else if (a <= d && b <= d && c <= d)
        {
            cout << 3;
        }

        cout << endl;
    }
    return 0;
}