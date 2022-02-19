#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MODVAL 1000000007
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll powe(ll n, ll a, ll beta)
{

    ll powVal = 1;
    n = n % beta;

    if (n == 0)
        return 0;

    while (a > 0)
    {

        if (a & 1)
            powVal = (powVal * n) % beta;
        a >>= 1;
        n = (n * n) % beta;
    }
    return powVal;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll resultVal = powe(2, n - 1, MODVAL);
        cout << resultVal << endl;
    }

    return 0;
}