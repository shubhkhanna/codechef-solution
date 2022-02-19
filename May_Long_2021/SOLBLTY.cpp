#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, calu, result;
        cin >> x >> a >> b;

        calu = a + (100 - x) * b;

        result = calu * 10;

        cout << result << endl;
    }
}