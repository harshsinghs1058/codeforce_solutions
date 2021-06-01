//this code is created by HARSH.
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
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    int totalBurger = b / 2;
    if (h > c)
    {
        int ham = min(totalBurger, p);
        totalBurger -= ham;
        int chicken = 0;
        if (totalBurger > 0)
        {
            chicken = min(totalBurger, f);
        }
        cout << ham * h + chicken * c;
    }
    else
    {

        int chicken = min(totalBurger, f);
        totalBurger -= chicken;
        int ham = 0;
        if (totalBurger > 0)
        {
            ham = min(totalBurger, p);
        }
        cout << ham * h + chicken * c;
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