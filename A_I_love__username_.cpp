//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/155/A
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
    cout.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    int a[n];
    f(i, n)
    {
        int m1, m2;
        cin >> a[i];
        if (i == 0)
        {
            m1 = a[i];
            m2 = a[i];
        }
        else if (a[i] > m1 || a[i] < m2)
        {
            ans++;
            m1 = max(m1, a[i]);
            m2 = min(m2, a[i]);
        }
    }
    cout << ans;
    return 0;
}