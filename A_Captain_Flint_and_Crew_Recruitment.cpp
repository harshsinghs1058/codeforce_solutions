//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1388/A
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
    int n;
    cin >> n;
    if (n < 31)
    {
        cout << "NO";
    }
    else
    {
        if (n - 30 != 6 && n - 30 != 10 && n - 30 != 14)
        {
            cout << "YES" << endl
                 << "6 10 14 " << n - 30;
        }
        else
        {

            cout << "YES" << endl
                 << "6 10 15 " << n - (6 + 10 + 15);
        }
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