#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 200001;
int coup, closest, temp = MAX_N, r, selisih;

void solve(){
    cin >> r;
    selisih = abs(coup-r);
    if (selisih < temp) {closest = r; temp = selisih;}
    if (selisih == temp) if (r < closest) closest = r;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc >> coup;
    for (int t = 0; t < tc; t++) {
        solve();
    } 
    cout << closest << endl;
}