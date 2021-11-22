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

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int x = INT_MIN;
        int y = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            x = max(x, arr[i]);
            y = min(y, arr[i]);
        }

        if (y == x)
        {
            cout << "0";
        }
        else
        {
            cout << x - y;
        }

        cout << endl;
    }
    return 0;
}