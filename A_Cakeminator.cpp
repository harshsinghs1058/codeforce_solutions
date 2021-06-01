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
    int n, m;
    cin >> n >> m;
    string s[n];
    int ans = 0;
    f(i, n)
    {
        cin >> s[i];
    }
    f(i, n)
    {
        f(j, m)
        {
            //cheking row
            bool temp1 = true, temp2 = true;
            f(k, m)
            {
                if (s[i][k] == 'S')
                {
                    temp1 = false;
                }
            }
            if (temp1)
            {
                f(k, m)
                {
                    s[i][k] = '*';
                }
            }
            //cheking column
            f(k, n)
            {
                if (s[k][j] == 'S')
                {
                    temp2 = false;
                }
            }
            if (temp2)
            {

                f(k, n)
                {
                    s[k][j] = '*';
                }
            }
        }
    }
    f(i, n)
    {
        f(j, m)
        {
            if (s[i][j] == '*')
            {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}