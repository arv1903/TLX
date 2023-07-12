#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool A[1000000] = {}; ll bil[1000000];

void solve() {
    ll n; cin >> n;
    cout << bil[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll index = 1; 

    for (ll i = 2; i <= 1000000; i++)
        if (!A[i]) {
            bil[index] = i; index++;
            for (ll j=i*i; j <= 1000000; j+=i) A[j] = true;  
        } 

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}