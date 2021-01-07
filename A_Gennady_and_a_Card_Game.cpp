//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1097/A
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
    string s;
    cin >> s;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    if (s[0] == s1[0] || s[0] == s2[0] || s[0] == s3[0] || s[0] == s4[0] || s[0] == s5[0] || s[1] == s1[1] || s[1] == s2[1] || s[1] == s3[1] || s[1] == s4[1] || s[1] == s5[1])
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}