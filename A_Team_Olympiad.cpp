//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/490/A
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
    int n;
    vi a, b, c;
    cin >> n;
    f(i, n)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            a.push_back(i + 1);
        }
        else if (temp == 2)
        {
            b.push_back(i + 1);
        }
        else
        {
            c.push_back(i + 1);
        }
    }
    int teams = min(a.size(), min(b.size(), c.size()));
    cout << teams << endl;
    if (teams == 0)
    {
        return 0;
    }
    f(i, teams)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
    return 0;
}