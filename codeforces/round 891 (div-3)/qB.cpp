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
    string s;
    cin >> s;

    string ans;
    ll indexs = -1;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '5')
        {
            indexs = i;
            break;
        }
    }

    if(indexs == -1)
    {
        p(s);
        return;
    }

    int i = indexs - 1;
    while(i >= 0 && (s[i] + 1) >= '5')
    {
        i--;
    }

    if(i == -1)
    {
        cout << 1;
        for(int i=0; i<s.length(); i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }

    s[i]++;
    for(int j = i+1; j<s.length(); j++)
    {
        s[j] = '0';
    }
    p(s);
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