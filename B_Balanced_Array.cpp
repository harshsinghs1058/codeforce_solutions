//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1343/B
#include <iostream>
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

void solve()
{
    int n;
    cin >> n;
    if ((n / 2) % 2 != 0)
    {
        cout << "NO";
        return;
    }
    else
    {
        cout << "YES" << endl;
    }
    int a[n];
    int sum1 = 0, sum2 = 0;
    f(i, n / 2)
    {
        a[i] = (i + 1) * 2;
        sum1 += a[i];
    }
    int j = 0;
    fs(i, n / 2, n - 1)
    {
        a[i] = (j * 2) + 1;
        sum2 += a[i];
        j++;
    }
    a[n - 1] = (sum1 - sum2);
    f(i, n)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        //	cout << "Case #" <<i<<": ";
        solve();
        cout << endl;
    }

    return 0;
}