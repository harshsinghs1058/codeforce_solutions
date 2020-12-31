//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/59/A
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
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    f(i, s.size())
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
    f(i, s.size())
    {
        if (upper == lower)
            cout << (char)tolower(s[i]);
        else if (upper > lower)
            cout << (char)toupper(s[i]);
        else
            cout << (char)towlower(s[i]);
    }
    return 0;
}
