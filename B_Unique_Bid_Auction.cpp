//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1454/B
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
const lli N = 200005;
void solve()
{
    int n;
    cin >> n;
    int v[N] = {0}, v2[N] = {0};
    int m = 0;
    f(i, n)
    {
        int temp;
        cin >> temp;
        m = max(m, temp);
        v[temp]++;
        v2[temp] = i + 1;
    }
    f(i, m + 1)
    {
        if (v[i] == 1)
        {
            cout << v2[i];
            return;
        }
    }
    cout << -1;
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