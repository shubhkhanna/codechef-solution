#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int x, m, d;
        cin >> x >> m >> d;

        cout << min(x * m, x + d) << "\n";
    }

    return 0;
}

// Input
// 3
// 1 1 0
// 1 3 1
// 2 2 3

// Output
// 1
// 2
// 4