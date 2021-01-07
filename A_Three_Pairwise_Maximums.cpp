//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1385/A
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
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
    int a[3];
    f(i, 3)
    {
        cin >> a[i];
    }
    if (((a[0] == a[1]) && a[0] >= a[2]) || ((a[0] == a[2]) && a[2] >= a[1]) || ((a[1] == a[2])) && a[1] >= a[0])
    {
        cout << "YES" << endl;
        if (a[0] == a[1] && a[1] == a[2])
        {
        }
        else if (a[0] == a[1])
        {
            a[1] = 1;
        }
        else if (a[0] == a[2])
        {
            a[2] = 1;
        }
        else
        {
            a[1] = 1;
        }
        cout << a[0] << " " << a[1] << " " << a[2];
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