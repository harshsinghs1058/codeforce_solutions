//this code is created by HARSH.
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) > 0 ? (x) : -(x))
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

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    lli n;
    cin >> n;
    lli a[n];
    lli negative = 0;
    lli zero = 0;
    lli cost = 0;
    f(i, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] >= 1)
        {
            cost += abs(a[i] - 1);
        }
        else
        {
            negative++;
            cost += abs(1 + a[i]);
        }
    }
    if (negative % 2 and zero == 0)
    {
        cost += 2;
    }
    cout << cost + zero;
    return 0;
}