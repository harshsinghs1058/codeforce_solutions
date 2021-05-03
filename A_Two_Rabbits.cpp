//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1304/A
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
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
    lli x, y, a, b;
    lli i = 0;
    cin >> x >> y;
    cin >> a >> b;
    double meetPoint = (double)((x * b) + (y * a)) / (a + b);
    double time = (meetPoint - x) / a;
    int temp = time;
    if (temp == time)
    {
        cout << temp;
    }
    else
    {
        cout << -1;
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