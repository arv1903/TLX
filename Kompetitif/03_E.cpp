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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n; cin >> n; string s;
    v<pair<ll, string> > vec(n);
    for(int i = 0; i < n; i++) {
        cin >> s; vec.pb(mk(s.length(), s));
    } sort(all(vec));

    for(auto i : vec) cout << i.ss << endl;
    
    return 0;
}