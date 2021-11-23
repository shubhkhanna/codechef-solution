#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int setbits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans++;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;
        int n = setbits(N);
        int ans1 = N - pow(2, n - 1) + 1;
        int ans2 = pow(2, n - 1) - pow(2, n - 2);
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}