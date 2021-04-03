//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/4/C
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
    int n;
    vector<vector<pair<string, int>>> v(33);
    cin >> n;
    f(i, n)
    {
        string s;
        cin >> s;
        int temp = -1;
        for (int j = 0; j < v[s.size()].size(); j++)
        {
            if (v[s.size()][j].first == s)
            {
                temp = ++v[s.size()][j].second;
                break;
            }
        }
        if (temp == -1)
        {
            v[s.size()].push_back({s, 0});
            cout << "OK" << endl;
        }
        else
        {
            cout << s << temp << endl;
        }
    }
    return 0;
}