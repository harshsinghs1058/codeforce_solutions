//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/469/A
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
    int a[n] = {0};
    int p, temp;
    cin >> p;
    f(i, p)
    {
        cin >> temp;
        a[temp - 1] = 1;
    }
    cin >> p;
    f(i, p)
    {
        cin >> temp;
        a[temp - 1] = 1;
    }
    f(i, n)
    {
        if (a[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}