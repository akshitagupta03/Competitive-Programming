#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define rep(x, start, end) for(ll x = start; x < end; x++)
#define rrep(x, start, end) for(ll x = start; x >= end; x--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

//-------------------------- Debug -------------------------/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
void solve()
{
    string s;
    cin >> s;
    
    if((s[0] != 'A' && s[0] != 'E' && s[0] != 'I' && s[0] != 'O' && s[0] != 'U') 
    && (s[1] == 'A' || s[1] == 'E' || s[1] == 'I' || s[1] == 'O' || s[1] == 'U') 
    && (s[2] != 'A' && s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2] != 'U') 
    && (s[3] == 'A' || s[3] == 'E' || s[3] == 'I' || s[3] == 'O' || s[3] == 'U') 
    && (s[4] != 'A' && s[4] != 'E' && s[4] != 'I' && s[4] != 'O' && s[4] != 'U') 
    && (s[5] == 'A' || s[5] == 'E' || s[5] == 'I' || s[5] == 'O' || s[5] == 'U') 
    && (s[6] != 'A' && s[6] != 'E' && s[6] != 'I' && s[6] != 'O' && s[6] != 'U') 
    && (s[7] != 'A' && s[7] != 'E' && s[7] != 'I' && s[7] != 'O' && s[7] != 'U'))
    {
        py;
    }
    else{
        pn;
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
