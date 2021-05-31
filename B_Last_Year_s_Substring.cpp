//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1462/B
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
#define In(x)                      \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cin >> x[i];               \
    }
#define Pnt(x)                     \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cout << x[i] << " ";       \
    }
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
    string s;
    cin >> s;
    bool ans = false;
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        ans = true;
    else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
        ans = true;
    else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        ans = true;
    else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        ans = true;
    else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        ans = true;
    cout << (ans ? "YES" : "NO");
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