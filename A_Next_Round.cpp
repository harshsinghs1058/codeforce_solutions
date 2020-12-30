//this code is created by HARSH.
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
    int n, k, ans = 0;
    cin >> n >> k;
    int a[n] = {0};
    f(i, n)
    {
        cin >> a[i];
    }
    f(i, n)
    {
        if (a[i] > 0 && a[i] >= a[k - 1])
        {
            ans++;
        }
        else
        {
            cout << ans;
            return 0;
        }
    }
    cout << ans;
    return 0;
}