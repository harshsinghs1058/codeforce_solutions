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
    int distint;
    string s;
    cin >> s;
    int a[26] = {0};
    f(i, s.size())
    {
        if (a[s[i] - 'a'] == 0)
        {
            a[s[i] - 'a']++;
            distint++;
        }
    }
    cout << (distint % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}