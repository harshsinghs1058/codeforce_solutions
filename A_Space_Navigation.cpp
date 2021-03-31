//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1481/A
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

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int u = 0, d = 0, r = 0, l = 0;
    f(i, s.size())
    {
        if (s[i] == 'U')
        {
            u++;
        }
        else if (s[i] == 'D')
        {
            d--;
        }
        else if (s[i] == 'R')
        {
            r++;
        }
        else if (s[i] == 'L')
        {
            l--;
        }
    }
    if (m <= u && m >= d && n <= r && n >= l)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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