#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define all(x) (x).begin(),(x).end()
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

void solve()
{
    int a[3][3];
    ll x = 0, y = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            char ch;
            cin >> ch;
            a[i][j] = ch;
            if(ch == '?')
            {
                x = i;
                y = j;
            }
        }
    }

    unordered_set<char> s;
    for(int i=0; i<3; i++)
    {
        s.insert(a[i][y]);
    }
    for(int j=0; j<3; j++)
    {
        s.insert(a[x][j]);
    }

    if(s.find('A') == s.end())
    {
        p('A');
    }
    else if(s.find('B') == s.end())
    {
        p('B');
    }
    else
    {
        p('C');
    }
}
 
//--------------------------- MAIN -------------------------/
int main() {
    ios_base::sync_with_stdio(false); // to make input output faster
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}