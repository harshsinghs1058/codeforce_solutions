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
    int chest = 0, bicep = 0, back = 0;
    int j = 0;
    f(i, n)
    {
        int temp;
        cin >> temp;
        if (j == 0)
        {
            chest += temp;
        }
        else if (j == 1)
        {
            bicep += temp;
        }
        else if (j == 2)
        {
            back += temp;
        }
        j++;
        if (j == 3)
        {
            j = 0;
        }
    }
    if (chest > bicep)
    {
        if (chest > back)
        {
            cout << "chest";
        }
        else
        {
            cout << "back";
        }
    }
    else
    {
        if (back > bicep)
        {
            cout << "back";
        }
        else
        {
            cout << "biceps";
        }
    }

    return 0;
}