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
        ll x, y;
        cin >> x >> y;

        if (x % 2 == 0)
        {
            if (y % 2 == 0 && x == 0)
            {
                cout << "YES";
            }
            else if (x == 0 && y % 2 != 0)
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
    return 0;
}