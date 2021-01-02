//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/996/A
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
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, ans = 0;
    if (n >= 100)
    {
        a = n / 100;
        n -= a * 100;
    }
    if (n >= 20)
    {
        b = n / 20;
        n -= b * 20;
    }
    if (n >= 10)
    {
        c = n / 10;
        n -= c * 10;
    }
    if (n >= 5)
    {
        d = n / 5;
        n -= d * 5;
    }
    if (n >= 1)
    {
        e = n;
    }
    cout << a + b + c + d + e;
    return 0;
}