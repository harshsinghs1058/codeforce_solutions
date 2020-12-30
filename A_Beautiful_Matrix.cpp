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
    int n, i = 1, j = 1;
    f(k, 25)
    {
        cin >> n;
        if (n == 1)
        {
            cout << abs(i - 3) + abs(j - 3);
            return 0;
        }
        else
        {
            j++;
            if (j == 6)
            {
                j = 1;
                i++;
            }
        }
    }
    return 0;
}