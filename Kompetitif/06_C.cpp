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
#define a first
#define b second
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
// NOTE : 1 (TRUE), 2 (FALSE)
 
void solve(){
    
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    
    ll n, total = 0, temp; cin >> n; v<ll> vec1, vec2;
    for (ll i = 0; i < n; i++) {cin >> temp; vec1.pb(temp);}
    for (ll i = 0; i < n; i++) {cin >> temp; vec2.pb(temp);}

    sort(all(vec1)); sort(all(vec2), greater<ll>());

    for (ll i = 0; i < n; i++) total += vec1[i]*vec2[i];

    cout << total << endl;

    return 0;
}