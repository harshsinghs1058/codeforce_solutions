//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1451/C
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
const lli N = 26;

void solve()
{
    int n, k;
    string a, b;
    cin >> n >> k >> a >> b;
    int have[27] = {0}, need[27] = {0};
    f(i, n)
    {
        have[a[i] - 'a']++;
        need[b[i] - 'a']++;
    }
    f(i, 26)
    {
        if (have[i] < need[i])
        {
            cout << "No";
            return;
        }
        have[i] -= need[i];
        if (have[i] % k)
        {
            cout << "No";
            return;
        }
        have[i + 1] += have[i];
    }
    cout << "Yes";
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