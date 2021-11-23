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
        ll a, b, c;
        cin >> a >> b >> c;

        if (a < b && a < c)
        {
            cout << "Draw";
        }
        else if (b < a && b < c)
        {
            cout << "Bob";
        }
        else
        {
            cout << "Alice";
        }
        cout << endl;
    }

    return 0;
}