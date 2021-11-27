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
        int a, b, X, Y;
        cin >> a >> b >> X >> Y;

        a = X / a;
        b = Y / b;
        a += b;
        cout << a << '\n';
    }

    return 0;
}