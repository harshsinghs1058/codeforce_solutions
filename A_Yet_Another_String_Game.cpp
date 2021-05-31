//this code is created by HARSH.
//problem link : https://codeforces.com/problemset/problem/1480/A
#include <bits/stdc++.h>
#define f(i, n) for (lli i = 0; i < (n); i++)
#define fs(i,p, n) for (lli i = (p); i < (n); i++)
#define fi(i,p, n) for (lli i = (p); i <= (n); i++)
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIX(x,y) ((x)<(y)?(x):(y))
#define p(x) cout << x << endl
#define A(x) x.begin(),x.end()
#define In(x)                      \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cin >> x[i];               \
    }
#define Pnt(x)                     \
    f(i, sizeof(x) / sizeof(x[0])) \
    {                              \
        cout << x[i] << " ";       \
    }
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long int lli;
typedef long int li;
const lli N=10000015;
/*
alice makes the first move
string is only of lower alphbet

*/
void solve(){
    string s;
    cin >> s;
    f(i,s.size()){
        if(i%2 == 0){
            if(s[i] != 'a'){
                s[i] = 'a';
            }
            else{
                s[i] = 'b';

            }
        }
        else{
            if(s[i] != 'z'){
                s[i] = 'z';
            }   
            else{
                s[i] = 'y';
            }
        }
    }
    cout << s;
}
int main()
{
    ios_base::sync_with_stdio(0);
   cout.tie(nullptr);
    cin.tie(nullptr);
    cout.precision(20);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        //	cout << "Case #" <<i++<<": ";
        solve();
        cout << endl;
    }
    
    return 0;
}