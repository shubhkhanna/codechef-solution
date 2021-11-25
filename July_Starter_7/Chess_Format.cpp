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
        ll a, b;
        cin >> a >> b;

        a += b;

        if (a < 3)
        {
            cout << "1"
                 << "\n";
        }
        else if (a >= 3 && a <= 10)
        {
            cout << "2"
                 << "\n";
        }
        else if (a >= 11 && a <= 60)
        {
            cout << "3"
                 << "\n";
        }
        else
        {
            cout << "4"
                 << "\n";
        }
    }

    return 0;
}