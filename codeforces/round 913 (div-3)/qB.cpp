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

    vector<char> v;
    vi lower, upper;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'b')
        {
            v.push_back('.');
            if(lower.empty() == false)
            {
                v[lower.back()] = '.';
                lower.pop_back();
            }
        }
        else if(s[i] == 'B')
        {
            v.push_back('.');
            if(upper.empty() == false)
            {
                v[upper.back()] = '.';
                upper.pop_back();
            }
        }
        else
        {
            v.push_back(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                lower.push_back(i);
            }
            else
            {
                upper.push_back(i);
            }
        }
    }
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] != '.')
        {
            cout << v[i];
        }
    }
    cout << endl;
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