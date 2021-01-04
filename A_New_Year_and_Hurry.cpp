//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/750/A
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
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int problemSolved = 0;
    int time = 240 - k;
    int i = 0;
    while (problemSolved < n && time > 0)
    {
        i++;
        time -= (i * 5);
        problemSolved++;
    }
    if (time < 0)
    {
        problemSolved--;
    }
    cout << min(problemSolved, n);
    return 0;
}