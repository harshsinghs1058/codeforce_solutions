//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1352/A
#include <iostream>
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < (n); i++)
#define fs(i, p, n) for (int i = (p); i < (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIX(x, y) ((x) < (y) ? (x) : (y))
#define p(x) cout << x << endl
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        int power = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                ans.push_back((n % 10) * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << ans.size() << endl;
        for (auto number : ans)
            cout << number << " ";
        cout << endl;
    }
}