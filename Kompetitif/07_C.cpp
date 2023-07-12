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
 
int solve(int n){
    int temp = n/2 + n/3 + n/4;
    return (temp >= n ? solve(n/2) + solve(n/3) + solve(n/4) : n);
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; cout << solve(n) << endl;
    return 0;
}