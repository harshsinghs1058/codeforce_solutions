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
    int n;
    cin >> n;
    f(i, n)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i < n - 1)
        {
            cout << "that ";
        }
    }
    cout << "it";
    return 0;
}