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
    string s;
    cin >> s;
    cout << 1;
    char last = (s[0] == '1' ? '2' : '1');
    fs(i, 1, n)
    {
        if (s[i] == '1')
        {
            if (last == '2')
            {
                cout << 0;
                last = '1';
            }
            else if (last == '1')
            {
                cout << '1';
                last = '2';
            }
            else
            {
                cout << 1;
                last = '2';
            }
        }
        else
        {
            if (last == '2')
            {
                cout << 1;
                last = '1';
            }
            else if (last == '1')
            {
                cout << '0';
                last = '0';
            }
            else if (last == '0')
            {
                cout << '1';
                last = '1';
            }
        }
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
        cout << endl;
    }

    return 0;
}