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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        for (int j = i; j < s.size(); j += 2)
        {
            if ((int)s[i] > (int)s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout << s;
    return 0;
}