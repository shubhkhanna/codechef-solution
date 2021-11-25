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
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            int num = b - a;
            if (num & 1)
            {
                num++;
            }
            else
            {
                num += 2;
            }

            cout << num / 2 << endl;
        }
    }

    return 0;
}