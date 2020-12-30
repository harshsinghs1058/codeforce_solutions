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

bool solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s1.size() != s2.size())
    {
        return false;
    }
    f(i, s1.size())
    {
        if (s1[i] != s2[s1.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}