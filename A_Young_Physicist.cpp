//this code is created by HARSH.
//problem link :https://codeforces.com/problemset/problem/69/A
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
    int x = 0, y = 0, z = 0;
    f(i, n)
    {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        x += a1;
        y += a2;
        z += a3;
    }
    cout << ((x == 0 && y == 0 && z == 0) ? "YES" : "NO");
    return 0;
}