//this code is created by HARSH.
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i, p, n) for (lli i = (p); i < (n); i++)
#define fi(i, p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define p(x) cout << x << endl
#define A(x) x.begin(), x.end()
#define input(x)                   \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cin >> x[i];               \
    }
#define print(x)                   \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cout << x[i] << " ";       \
    }
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N = 10000015;

/*qwertyuiop
asdfghjkl;
zxcvbnm,./
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    string s1, s;
    cin >> s1;
    cin >> s;
    string temp1 = "qwertyuiop";
    string temp2 = "asdfghjkl;";
    string temp3 = "zxcvbnm,./";
    int k = 1;
    if (s1 == "R")
    {
        k = -1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (temp1.find(s[i]) != string::npos)
        {
            cout << temp1[temp1.find(s[i]) + k];
        }
        else if (temp2.find(s[i]) != string::npos)
        {
            cout << temp2[temp2.find(s[i]) + k];
        }
        else
        {
            cout << temp3[temp3.find(s[i]) + k];
        }
    }
    return 0;
}