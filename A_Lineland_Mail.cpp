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
    int a[n];
    input(a);
    cout << abs(a[1] - a[0]) << " " << abs(a[n - 1] - a[0]) << endl;
    fs(i, 1, n - 1)
    {
        cout << min(abs(a[i] - a[i - 1]), abs(a[i + 1] - a[i])) << " " << max(abs(a[n - 1] - a[i]), abs(a[i] - a[0])) << endl;
    }
    cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]) << endl;
    return 0;
}