#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isEqual(int *arr, int n)
{
    int firstElem = arr[0];
    for (int i = 1; i < 4; i++)
        if (arr[i] != firstElem)
            return false;
    return true;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;

    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
            cin >> arr[i];

        sort(arr, arr + 4);

        if (isEqual(arr, 4))
            cout << 0 << endl;
        else if ((arr[0] == arr[1] && arr[1] == arr[2]) || (arr[1] == arr[2] && arr[2] == arr[3]))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}