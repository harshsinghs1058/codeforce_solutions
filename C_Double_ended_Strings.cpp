//this code is created by HARSH.
//problem link : https://codeforces.com/contest/1506/problem/C
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define fi(i, p, n) for (int i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;
int LCSubStr(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int LCSuff[n + 1][m + 1];
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (s1[i - 1] == s2[j - 1])
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}
void solve()
{
    string s, k;
    cin >> s >> k;
    int comman = LCSubStr(s, k);
    if (s.size() == comman && k.size() == comman)
    {
        cout << 0;
    }
    else
    {
        cout << (s.size() - comman) + (k.size() - comman);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        //	cout << "Case #" <<i++<<": ";
        solve();
        cout << endl;
    }

    return 0;
}