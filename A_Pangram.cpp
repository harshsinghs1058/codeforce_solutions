
//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/520/A
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
    string s;
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        cin >> s;
        int a[26] = {0};
        f(i, n)
        {
            s[i] = (char)tolower(s[i]);
            a[(int)(s[i] - 'a')] = 1;
        }
        int sol = 0;
        f(i, 26)
        {
            sol += a[i];
        }
        cout << (sol == 26 ? "YES" : "NO");
    }
    return 0;
}