//this code is created by HARSH.
//problem link : https: //codeforces.com/problemset/problem/141/A
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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a[26] = {0}, b[26] = {0};
    f(i, max((max(s1.size(), s2.size())), s3.size()))
    {
        if (i < s1.size())
            a[(s1[i] - 'A')]++;
        if (i < s2.size())
            a[(s2[i] - 'A')]++;
        if (i < s3.size())
            b[(s3[i] - 'A')]++;
    }
    f(i, 26)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}