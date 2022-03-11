// this code is created by HARSH.
#include <iostream>
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define p(x) cout << x << endl
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    f(i, n)
    {
        f(j, n)
        {
            cin >> a[i][j];
        }
    }
    lli ans = 0;
    //
    f(i, n)
    {
        ans += a[i][i];
        ans += a[i][n - i - 1];
        ans += a[n / 2][i];
        ans += a[i][n / 2];
    }
    ans -= 3 * a[n / 2][n / 2];
    cout << ans;
    return 0;
}