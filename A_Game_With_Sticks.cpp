//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/451/A
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
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << (n % 2 == 0 ? "Malvika" : "Akshat");
    }
    else
    {
        int k = min(m, n);
        k++;
        cout << (k % 2 != 0 ? "Malvika" : "Akshat");
    }
    return 0;
}