//this code is created by HARSH.
//problem link :https://codeforces.com/problemset/problem/71/A
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
    string s;
    cin >> s;
    if (10 >= s.size())
    {
        cout << s;
        return;
    }
    else
    {
        cout << s.front() << s.size() - 2 << s.back();
    }
}
int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" <<i<<": ";
        solve();
        cout << endl;
    }

    return 0;
}
