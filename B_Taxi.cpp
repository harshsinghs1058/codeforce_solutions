//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/158/B
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
    int a[n];
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    f(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
            a1++;
        else if (a[i] == 2)
            a2++;
        else if (a[i] == 3)
            a3++;
        else
            a4++;
    }
    int ans = a4;
    int temp = min(a1, a3);
    a1 -= temp;
    a3 -= temp;
    ans += (temp + a3);
    temp = a2 / 2;
    a2 -= temp * 2;
    if (a1 % 2 != 0)
        a1++;
    a2 += a1 / 2;
    ans += (temp + (a2 / 2) + (a2 % 2));
    cout << ans;
    return 0;
}