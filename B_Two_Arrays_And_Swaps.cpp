//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1353/B
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
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    f(i, n)
    {
        cin >> a[i];
    }
    f(i, n)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int i = 0, j = (n - 1);
    while (i < n && j >= 0 && k-- > 0)
    {
        if (a[i] >= b[j])
        {
            break;
        }
        else
        {
            swap(a[i], b[j]);
            i++;
            j--;
        }
    }
    int sum = 0;
    for (auto i : a)
    {
        sum += i;
    }
    cout << sum;
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
        solve();
        cout << endl;
    }
    return 0;
}