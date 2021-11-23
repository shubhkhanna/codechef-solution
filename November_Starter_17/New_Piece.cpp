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
        ll n, m, o, p;
        cin >> n >> m >> o >> p;

        if (n == o && m == p)
        {
            cout << "0";
        }
        else if (((n + m) % 2 == 0 && (o + p) % 2 == 0) || ((n + m) % 2 == 1 && (o + p) % 2 == 1))
        {
            cout << "2";
        }
        else
        {
            cout << "1";
        }

        cout << endl;
    }
    return 0;
}