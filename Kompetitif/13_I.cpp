/* Date : 2023, August 24 */ 

#include <bits/stdc++.h>
using namespace std;
 
#define int      long long
#define all(a)   (a).begin(), (a).end()
#define pb       push_back
#define pii      pair<int, int>
#define ff       first
#define ss       second
 
#define lcm(a,b) (a * (b / __gcd(a,b)))
#define dbg(x)   cout << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD  = 1e9 + 7;
const int INF  = 1e9;
 
// UB = >, LB = >=
 
void solve(){
    int l, r; cin >> l >> r; l--, r++; string s;

    while(l <= r) {
        int mid = (r+l)/2;
        cout << mid << endl;
        cin >> s;
        if(s == "selamat") {
            break;
        }
        cin >> s;
        if(s == "besar") {
            r = mid;
        } else {
            l = mid;
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}