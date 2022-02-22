// this code is created by HARSH.
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
#define input(x)                   \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cin >> x[i];               \
    }
#define print(x)                   \
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
    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    f(i, 6)
    {
        if ((s[i] == 'R' && r != 1) || (s[i] == 'G' && g != 1) || (s[i] == 'B' && b != 1))
        {
            cout << "NO";
            return;
        }
        else if (s[i] == 'r')
        {
            r = 1;
        }
        else if (s[i] == 'g')
        {
            g = 1;
        }
        else if (s[i] == 'b')
        {
            b = 1;
        }
    }
    cout << "YES";
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
        // cout << "Case #" <<i++<<": ";
        solve();
        cout << endl;
    }

    return 0;
}