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
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if (v[0] + v[1] == v[2])
        cout << "YES";
    else if (v[1] == v[2] && v[0] % 2 == 0)
        cout << "YES";
    else if (v[1] == v[0] && v[2] % 2 == 0)
        cout << "YES";
    else
        cout
            << "NO";
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