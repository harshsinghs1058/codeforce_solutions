//this code is created by HARSH.
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

bool solve(int n)
{
    int a[10] = {0};
    while (n >= 1)
    {
        if (a[n % 10] != 0)
            return false;
        else
        {
            a[n % 10]++;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (solve(n))
        n++;
    while (!solve(n))
    {
        n++;
    }
    cout << n;
    return 0;
}