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
 
int N, B, temp; v<int> vec(N);

void solve(int b){
    int idx = 0, h = 0;
    while (h < b) {
        h += vec[idx];
        idx++;
    }
    cout << idx << endl; return;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> temp; vec.pb(temp);
    }

    sort(all(vec), greater<int>());

    solve(B);


    return 0;
}