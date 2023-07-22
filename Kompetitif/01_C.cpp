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
    string s, front = "", back = ""; cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '*') {
            for(int j = i+1; j < s.length(); j++) {
                back += s[j];
            }
            break;
        }
        front += s[i];
    }
    string a; int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if (a.length() >= front.length() + back.length()) {
            if(front.length() + back.length() == 0) {
                cout << a << endl;
            } else {
                if (front == a.substr(0, front.length()) && back == a.substr(a.length()-back.length(), a.length())) cout << a << endl;
            }
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}