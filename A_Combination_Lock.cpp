//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/540/A
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
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int sum = 0;
    f(i, n)
    {
        int t1 = s1[i] - '0';
        int t2 = s2[i] - '0';
        int temp;
        if (abs(t1 - t2) > 5)
        {
            temp = (10 - abs(t1 - t2));
        }
        else
        {
            temp = abs(t1 - t2);
        }
        sum += temp;
    }
    cout << endl
         << sum;
    return 0;
}