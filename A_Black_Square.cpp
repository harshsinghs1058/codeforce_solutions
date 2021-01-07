//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/431/A
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
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
    int a, b, c, d;
    int a1 = 0, b1 = 0, c1 = 0, d1 = 0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    f(i, s.size())
    {
        if (s[i] == '1')
        {
            a1++;
        }
        else if (s[i] == '2')
        {
            b1++;
        }
        else if (s[i] == '3')
        {
            c1++;
        }
        else if (s[i] == '4')
        {
            d1++;
        }
    }
    cout << a * a1 + b * b1 + c * c1 + d * d1;
    return 0;
}