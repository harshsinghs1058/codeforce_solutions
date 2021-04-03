//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/486/B
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
    int n, m;
    cin >> n >> m;
    bool a[n][m];
    bool b[n][m];
    f(i, n)
    {
        f(j, m)
        {
            cin >> a[i][j];
            b[i][j] = true;
        }
    }
    f(i, n)
    {
        f(j, m)
        {
            if (a[i][j] == false)
            {
                f(k, n)
                {
                    b[k][j] = false;
                }
                f(k, m)
                {
                    b[i][k] = false;
                }
            }
        }
    }
    f(i, n)
    {
        f(j, m)
        {
            if (a[i][j] == true)
            {
                int temp = 0;
                f(k, n)
                {
                    if (b[k][j] == true)
                    {
                        temp = 1;
                        break;
                    }
                }
                if (temp == 0)
                    f(k, m)
                    {
                        if (b[i][k] == true)
                        {
                            temp = 1;
                            break;
                        }
                    }
                if (temp == 0)
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    f(i, n)
    {
        f(j, m)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}