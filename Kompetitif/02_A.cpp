#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fpb(ll x1, ll x2) {
    if (x1 == 0) return x2;
    return fpb(x2%x1, x1);
}

void solve() {
    ll a,b,c,d,e,f; cin >> a >> b >> c >> d;
    f = b*d; e = (a*d + b*c); ll div = fpb(e,f);

    cout << e/div << " " << f/div << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}