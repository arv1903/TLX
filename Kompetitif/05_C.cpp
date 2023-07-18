#include <bits/stdc++.h>
using namespace std;
 
// MY PERSONAL TEMPLATE
 
#define ar array
#define v vector
#define ll long long
#define ld long double 
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
// NOTE : 1 (TRUE), 2 (FALSE)

ll modpow(ll x, ll n, ll m) { 
    if (n == 0) return 1%m;
    ll u = modpow(x,n/2,m); u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u; 
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    ll a, b, c, n; cin >> a >> b >> c >> n;

    for(int i = 0; i < c; i++) a = modpow(a, b, n);
    cout << a+1 << endl;
    
    return 0;
}