//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/711/A
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
    string a[n];
    int k = 0;
    f(i, n)
    {
        cin >> a[i];
        if (a[i][0] == 'O' && a[i][1] == 'O' && k == 0)
        {
            k++;
            a[i][0] = '+';
            a[i][1] = '+';
        }
        else if (a[i][3] == 'O' && a[i][4] == 'O' && k == 0)
        {
            k++;
            a[i][3] = '+';
            a[i][4] = '+';
        }
    }
    if (k == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        f(i, n)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}