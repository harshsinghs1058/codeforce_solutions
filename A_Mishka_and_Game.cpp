//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/703/A
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
    int n, a = 0, b = 0;
    cin >> n;
    f(i, n)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp1 > temp2)
        {
            a++;
        }
        else if (temp2 > temp1)
        {
            b++;
        }
    }
    cout << ((a == b) ? ("Friendship is magic!^^") : ((a > b) ? "Mishka" : "Chris"));
    return 0;
}