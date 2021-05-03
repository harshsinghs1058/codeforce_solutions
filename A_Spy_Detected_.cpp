//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1512/A
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
    int a[n];
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    f(i, n)
    {
        cin >> a[i];
        if (t5 == 0 || t2 == 0)
            if (t1 == 0)
            {
                t1 = a[i];
                t3 = i + 1;
            }
            else if (t2 == 0 && a[i] != t1)
            {
                t2 = a[i];
                t4 = i + 1;
            }
            else if (a[i] == t1)
            {
                t5++;
            }
    }
    cout << (t5 == 0 ? t3 : t4);
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