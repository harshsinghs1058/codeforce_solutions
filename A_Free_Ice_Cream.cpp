//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/686/A
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
    lli n, iceCream, upsetchildren = 0;
    cin >> n >> iceCream;
    f(i, n)
    {
        char c;
        int temp;
        cin >> c;
        cin >> temp;
        if (c == '+')
        {
            iceCream += temp;
        }
        else if (c == '-')
        {
            if (iceCream >= temp)
            {
                iceCream -= temp;
            }
            else
            {
                upsetchildren++;
            }
        }
    }
    cout << iceCream << " " << upsetchildren;
    return 0;
}