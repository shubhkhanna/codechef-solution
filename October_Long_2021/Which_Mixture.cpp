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
        ll n, m;
        cin >> n >> m;

        if (n > 0 && m > 0)
        {
            cout << "Solution";
        }
        else if (n == 0)
        {
            cout << "Liquid";
        }
        else if (m == 0)
        {
            cout << "Solid";
        }

        cout << endl;
    }

    return 0;
}