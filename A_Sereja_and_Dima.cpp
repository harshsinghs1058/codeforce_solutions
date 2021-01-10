//this code is created by HARSH.
//problem link : v
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
    int n;
    cin >> n;
    int a[n];
    f(k, n)
    {
        cin >> a[k];
    }
    int i = 0, j = n - 1;
    int s = 0, d = 0;
    while (i <= j)
    {
        if (a[i] >= a[j])
        {
            s += a[i];
            i++;
        }
        else
        {
            s += a[j];
            j--;
        }
        if (i > j)
        {
            break;
        }
        if (a[i] >= a[j])
        {
            d += a[i];
            i++;
        }
        else
        {
            d += a[j];
            j--;
        }
    }
    cout << s << " " << d;
    return 0;
}