// //this code is created by HARSH.
// #include <bits/stdc++.h>
// #define f(i, n) for (lli i = 0; i < (n); i++)
// #define fs(i, p, n) for (lli i = (p); i < (n); i++)
// #define fi(i, p, n) for (lli i = (p); i <= (n); i++)
// #define MAX(x, y) ((x) > (y) ? (x) : (y))
// #define MIN(x, y) ((x) < (y) ? (x) : (y))
// #define abs(x) ((x) > 0 ? (x) : -(x))
// #define p(x) cout << x << endl
// #define A(x) x.begin(), x.end()
// #define input(x)                   \
//     f(i, sizeof(x) / sizeof(x[0])) \
//     {                              \
//         cin >> x[i];               \
//     }
// #define print(x)                   \
//     f(i, sizeof(x) / sizeof(x[0])) \
//     {                              \
//         cout << x[i] << " ";       \
//     }
// using namespace std;
// typedef vector<int> vi;
// typedef vector<vector<int>> vvi;
// typedef long long int lli;
// typedef long int li;
// const lli N = 10000015;
// struct comp
// {
//     template <typename T>
//     // Comparator function
//     bool operator()(const T &l,
//                     const T &r) const
//     {
//         return l.second < r.second;
//     }
// };
// void solve(map<int, int> m)
// {
//     vector<pair<int, int>> vec;
//     for (auto itr : m)
//     {
//         vec.push_back(itr);
//     }
//     sort(vec.begin(), vec.end(), comp());
//     cout << vec.size() << endl;
//     for (auto itr : vec)
//     {
//         cout << itr.first << " ";
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cout.tie(nullptr);
//     cin.tie(nullptr);
//     cout.precision(20);
//     lli n;
//     cin >> n;
//     map<int, int> s;
//     f(i, n)
//     {
//         int temp;
//         cin >> temp;
//         s[temp] = i;
//     }
//     solve(s);
//     return 0;
// }

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

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    lli n;
    cin >> n;
    vi vec;
    set<int> s;
    int a[n];
    input(a);
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            vec.push_back(a[i]);
        }
    }
    cout << vec.size() << endl;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << " ";
    }
    return 0;
}