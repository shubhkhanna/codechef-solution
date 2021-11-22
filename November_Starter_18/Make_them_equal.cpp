#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool eq(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            return false;
        }
    }

    return true;
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

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int x = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > x)
            {
                x = arr[i];
            }
        }

        int ans = 0;

        while (eq(arr, n) == false)
        {
            ans++;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < x)
                {
                    arr[i]++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}