//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/448/A
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
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int cup = a1 + a2 + a3;
    int medal = b1 + b2 + b3;
    int cupShelves = (cup / 5);
    if (cup % 5 != 0)
    {
        cupShelves++;
    }
    int medalShelves = (medal / 10);
    if (medal % 10 != 0)
    {
        medalShelves++;
    }
    int total = cupShelves + medalShelves;
    cout << ((total <= n ? "YES" : "NO"));
    return 0;
}