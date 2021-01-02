//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/492/B
#include <iostream>
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define p(x) cout << x << endl
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    if (n == 1)
    {
        int a;
        cin >> a;
        cout << fixed << setprecision(10) << max(a, l - a);
    }
    else
    {
        int a[n];
        int b[n - 1];
        f(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = a[0], y = l - a[n - 1];
        f(i, n - 1)
        {
            b[i] = a[i + 1] - a[i];
        }
        sort(b, b + n - 1);
        x = max(x, y);
        cout << fixed << setprecision(10) << (x > ((float)b[n - 2] / 2) ? x : ((float)b[n - 2] / 2));
    }
    return 0;
}