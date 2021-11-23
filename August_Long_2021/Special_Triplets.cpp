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
        int n;
        cin >> n;

        int count = 0;
        for (int i = 1; i <= n; i++)
            for (int j = i; j <= n; j += i)
                for (int k = i; k <= n; k += j)
                    if (k % j == i && j % i == 0)
                        count++;

        cout << count << '\n';
    }
    return 0;
}