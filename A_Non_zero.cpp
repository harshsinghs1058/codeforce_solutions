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
lli productOfArr(lli a[], lli n)
{
    lli ans = 1;
    f(i, n)
    {
        ans *= a[i];
    }
    return ans;
}
lli sumofArr(lli a[], lli n)
{
    lli ans = 0;
    f(i, n)
    {
        ans += a[i];
    }
    return ans;
}
void solve()
{
    lli n;
    cin >> n;
    lli a[n];
    int ans = 0;
    f(i, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            a[i] = 1;
            ans++;
        }
    }
    int j = 0;
    while (sumofArr(a, n) == 0)
    {
        if (a[j] == -1)
        {
            j++;
        }
        else
        {
            a[j]++;
            ans++;
        }
    }
    cout << ans;
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