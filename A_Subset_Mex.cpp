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
int mex(unordered_set<int> s)
{
    vi vec;
    int k = 0;
    for (auto x : s)
    {
        vec.push_back(x);
    }

    sort(A(vec));
    f(i, vec.size())
    {
        if (vec[i] != k)
            return k;
        k++;
    }

    return k;
}
void solve()
{
    lli n;
    cin >> n;
    unordered_set<int> s1, s2;
    f(i, n)
    {
        int temp;
        cin >> temp;
        if (s1.find(temp) == s1.end())
        {
            s1.insert(temp);
        }
        else
        {
            s2.insert(temp);
        }
    }
    cout << mex(s1) + mex(s2);
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