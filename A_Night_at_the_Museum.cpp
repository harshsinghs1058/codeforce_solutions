//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/731/A
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define fi(i, p, n) for (int i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    string s;
    cin >> s;
    char c = 'a';
    int steps = 0;
    f(i, s.size())
    {
        int t1 = s[i] - 'a';
        int t2 = c - 'a';
        if (abs(t1 - t2) > 13)
        {
            steps += (26 - abs(t1 - t2));
        }
        else
        {
            steps += (abs(t1 - t2));
        }
        c = s[i];
    }
    cout << steps;
    return 0;
}