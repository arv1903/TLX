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
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    ll n, d, H, B, total = 0;
    cin >> n >> d;
    pair<ll, ll> vec[n];
    for (ll i = 0; i < n; i++){
        cin >> H >> B; 
        vec[i].ff = H; vec[i].ss = H*B;
    } 
    sort(vec, vec+n);
    for (ll i = 0; i < n; i++){
        if (d - (vec[i].ss) >= 0){
            d -= (vec[i].ss);
            total += vec[i].ss/vec[i].ff;
        } else {
            total += d/(vec[i].ff); 
            break;
        }
    }
    cout << total << endl;

    return 0;
}