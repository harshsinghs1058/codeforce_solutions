//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1335/A
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
    lli n;
    cin >> n;
    lli ans = 0;
    ans = n / 2;
    if (n % 2 == 0)
        ans--;
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
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