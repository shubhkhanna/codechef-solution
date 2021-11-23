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
        ll g1,s1,b1,g2,s2,b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;

        g1 += s1+b1;
        g2 += s2+b2;

        ll n = (g1>g2) ? 1 : 2;
        cout << n << endl;
        
    }
    return 0;
}

//  Input:
// 3
// 10 20 30 0 29 30
// 0 0 0 0 0 1
// 1 1 1 0 0 0

// Output:
// 1
// 2
// 1