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
        ll n, k;
        cin >> n >> k;

        if (n % k == 0)
        {
            cout << n / k;
        }
        else
        {
            cout << (n / k) + 1;
        }

        cout << endl;
    }
    return 0;
}