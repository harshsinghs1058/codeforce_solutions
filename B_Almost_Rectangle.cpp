//this code is created by HARSH.
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
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

void solve()
{
    lli n;
    cin >> n;
    string s[n];
    input(s);
    int a1 = -1, a2 = -1;
    int b1 = -1, b2 = -1;
    f(i, n)
    {
        f(j, n)
        {
            if (s[i][j] == '*')
            {
                if (a1 == -1 and b2 == -1)
                {
                    a1 = i;
                    b1 = j;
                }
                else
                {
                    a2 = i;
                    b2 = j;
                    break;
                }
            }
        }
    }
    //in diffrennt row and in diffrent column
    if (a1 != a2 and b1 != b2)
    {
        s[a1][b2] = '*';
        s[a2][b1] = '*';
    }
    //same column
    else if (b1 == b2)
    {
        if (b1 != 0)
        {
            s[a1][0] = '*';
            s[a2][0] = '*';
        }
        else
        {
            if (n != 1)
            {
                s[a1][1] = '*';
                s[a2][1] = '*';
            }
        }
    }
    else
    {
        if (a1 != 0)
        {
            s[0][b1] = '*';
            s[0][b2] = '*';
        }
        else
        {
            if (n != 1)
            {
                s[1][b1] = '*';
                s[1][b2] = '*';
            }
        }
    }
    f(i, n)
    {
        cout << s[i] << endl;
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
    }

    return 0;
}