//this code is created by HARSH.
//problem link :https://codeforces.com/problemset/problem/110/A
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
    lli n, luckyNos = 0;
    cin >> n;
    while (n > 1)
    {
        lli temp;
        temp = n % 10;
        if (temp == 4 || temp == 7)
            luckyNos++;
        n /= 10;
    }
    cout << ((luckyNos == 4 || luckyNos == 7) ? "YES" : "NO");
    return 0;
}
