//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/599/A
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define fi(i, p, n) for (int i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int temp = d1 + d2;
    lli ans = 0;
    ans = min(d1, d2);
    if (ans == d1)
    {
        if (temp > d3)
        {
            ans += d3;
        }
        else
        {
            ans += temp;
        }
        if (d2 < d1 + d3)
        {
            ans += d2;
        }
        else
        {
            ans += (d1 + d3);
        }
    }
    else
    {
        if (temp > d3)
        {
            ans += d3;
        }
        else
        {
            ans += temp;
        }
        if (d1 > d2 + d3)
        {
            ans += (d2 + d3);
        }
        else
        {
            ans += d1;
        }
    }
    cout << ans;
    return 0;
}