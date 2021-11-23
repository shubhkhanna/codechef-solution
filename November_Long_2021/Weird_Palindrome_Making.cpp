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
        ll n, oc = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (temp % 2 != 0)
            {
                oc++;
            }
        }

        if (oc % 2 != 0)
            oc--;

        cout << oc / 2 << endl;
    }
    return 0;
}