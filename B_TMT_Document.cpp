//this code is created by HARSH.
//problem link : https://codeforces.com/contest/1509/problem/B
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0;
    if (s[0] != 'T' || s[n - 1] != 'T')
    {

        cout << "NO";
        return;
    }
    f(i, n)
    {
        if (s[i] == 'T')
        {
            t++;
        }
        else if (s[i] == 'M')
        {
            m++;
        }
        if (m > t)
        {
            cout << "NO";
            return;
        }
    }
    if (t != 2 * m)
    {
        cout << "NO";
        return;
    }
    reverse(A(s));
    t = 0;
    m = 0;
    f(i, n)
    {
        if (s[i] == 'T')
        {
            t++;
        }
        else if (s[i] == 'M')
        {
            m++;
        }
        if (m > t)
        {
            cout << "NO";
            return;
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
        //	cout << "Case #" <<i++<<": ";
        solve();
        cout << endl;
    }

    return 0;
}