//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/144/A
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
    int n;
    cin >> n;
    int a[n];
    int max = 0, maxId = 0;
    int min = INT_MAX, minId = 0;
    f(i, n)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
            maxId = i;
        }
        if (min >= a[i])
        {
            min = a[i];
            minId = i;
        }
    }
    int temp1 = n - minId - 1;
    if (maxId > minId)
        temp1--;
    cout << maxId + temp1;
    return 0;
}