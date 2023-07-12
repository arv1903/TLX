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
#define input_vec(vec) for (auto &i : vec) cin >> i;
#define print_vec(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
// NOTE : 1 (TRUE), 2 (FALSE)

v<int> vec;
string order; int x, y;

void solve(){
    cin >> order;
    if (order == "add"){
        cin >> x >> y;
        for(int i = 0; i < y; i++) vec.pb(x);
        cout << vec.size() << endl;
    } else if (order == "del") {
        cout << vec[0] << endl;
        cin >> x;
        vec.erase(vec.begin(), vec.begin()+x);
    } else {
        reverse(all(vec));
    }

}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    return 0;
}