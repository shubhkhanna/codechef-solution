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
        ll N, K, S;
        cin >> N >> K >> S;

        S -= (N * N);

        cout << S / (K - 1) << endl;
    }

    return 0;
}
