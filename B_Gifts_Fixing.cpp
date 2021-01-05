//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1399/B
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
    int a[n], b[n], minA = INT_MAX, minB = INT_MAX;
    lli ans = 0;
    f(i, n)
    {
        cin >> a[i];
        minA = min(minA, a[i]);
    }
    f(i, n)
    {
        cin >> b[i];
        minB = min(minB, b[i]);
    }
    f(i, n)
    {
        int movesA = 0, movesB = 0;
        if (a[i] != minA)
            movesA = a[i] - minA;
        if (b[i] != minB)
            movesB = b[i] - minB;
        ans += max(movesA, movesB);
    }
    cout << ans;
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