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

list<int> vec;

void solve(){
    string command; int num;
    cin >> command; 
    if (command != "pop_front" && command != "pop_back") {
        cin >> num;
        if (command == "push_back") {
            vec.pb(num);
        } if (command == "push_front") {
            vec.push_front(num);
        }
    } else {
        if (command == "pop_front") vec.pop_front();
        if (command == "pop_back") vec.pop_back();

    }
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    for (auto i : vec) cout << i << endl;
    return 0;
}