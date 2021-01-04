//this code is created by HARSH.
// //problem link : https://codeforces.com/problemset/problem/1399/A
#include <iostream>
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

void solve()
{
    int n;
    cin >> n;
    int elementLeft = n;
    int a[n];
    f(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    f(i, n - 1)
    {
        fs(j, i + 1, n)
        {
            if ((a[j] > 0) && (a[i] > 0) && (abs(a[i] - a[j]) >= 0) && (abs(a[i] - a[j]) <= 1))
            {
                if (a[i] > a[j])
                {
                    a[j] = -1;
                    elementLeft--;
                    i--;
                }
                else
                {
                    elementLeft--;
                    a[i] = -1;
                }
            }
        }
    }
    cout << (elementLeft == 1 ? "YES" : "NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        //	cout << "Case #" <<i<<": ";
        solve();
        cout << endl;
    }

    return 0;
}