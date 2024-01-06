#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

 
void solve()
{
    string s;
    cin >> s;

    ll num = s[1] - '0';
    for(int i=1; i<=8; i++)
    {
        if(i != num)
        {
            cout << s[0] << i << endl;
        }
    }
    for(char i = 'a'; i <= 'h'; i++)
    {
        if(i != s[0])
        {
            cout << i << s[1] << endl;
        }
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