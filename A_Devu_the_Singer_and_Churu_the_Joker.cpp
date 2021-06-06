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
    lli n, d;
    cin >> n >> d;
    lli a[n];
    lli sum = 0;
    f(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    int minJokes = (n - 1) * 2;
    int minTime = sum + (minJokes * 5);
    if (minTime > d)
    {
        cout << -1;
    }
    else
    {
        int totalJokes = (d - minTime) / 5;
        totalJokes += minJokes;
        cout << totalJokes;
    }
    return 0;
}