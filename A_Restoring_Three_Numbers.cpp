//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1154/A
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
    int a, b, c, d;
    int arr[4];
    f(i, 4)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    a = arr[3] - arr[2];
    b = arr[0] - a;
    c = arr[1] - a;
    cout << a << " " << b << " " << c;
    return 0;
}