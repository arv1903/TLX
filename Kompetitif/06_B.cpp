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
    int n, s, d; cin >> n;
    pair<ll, ll> p[n];
    for (int i = 0; i < n; i++) {
        cin >> s >> d;
        p[i].ff = s+d; p[i].ss = s;
    }

    sort(p, p+n);
    int cnt = 1, prev = 0;
    for (int i = 0; i < n; i++){
        if (p[i].ss >= p[prev].ff) {
            cnt++;
            prev = i;
        }
    }

    cout << cnt << endl;

    return 0;
}