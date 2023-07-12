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
#define input_vec(vec) for (auto &i : vec) cin >> i;
#define print_vec(vec) for (auto i : vec)  cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))

 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// NOTE : 1 (TRUE), 2 (FALSE)

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    
    int n, m, tmp, cnt = 0; cin >> n >> m; v<int> N(n), M(m);
    input_vec(N); input_vec(M);

    sort(all(N), greater<int>()); sort(all(M), greater<int>());

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (N[j] == M[i] || N[j]+1 == M[i]){
                cnt++;
                N[j] = 0;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}