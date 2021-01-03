//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/148/A
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
    int n, a, b, c, d;
    cin >> a >> b >> c >> d;
    cin >> n;
    int ans = 0;
    f(i, n)
    {
        int temp = i + 1, sol = 0;
        if (temp >= a && temp % a == 0)
        {
            sol = 1;
        }
        else if (temp >= b && temp % b == 0)
        {
            sol = 1;
        }
        else if (temp >= c && temp % c == 0)
        {
            sol = 1;
        }
        else if (temp >= d && temp % d == 0)
        {
            sol = 1;
        }
        if (sol == 1)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}