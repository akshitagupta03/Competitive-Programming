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

bool checkC(char ch)
{
    if(ch == 'a' || ch == 'e')
    {
        return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";
    int i=0;
    while(i < n)
    {
        ans += s[i];
        ans += s[i+1];

        if(i+3 < n)
        {
            if(checkC(s[i+3]))
            {
                ans += s[i+2];
                ans += '.';
                i += 3;
            }
            else
            {
                ans += '.';
                i += 2;
            }
        }
        else
        {
            if(i+2 < n)
            {
                ans += s[i+2];
                break;
            }
            break;
        }
    }
    p(ans);
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