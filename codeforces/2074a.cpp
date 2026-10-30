#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int l, r, d, u; 
    cin >> l >>r >> d >> u; 
    int ans = l == r && r == d && d == u; 
    cout << (ans? "Yes": "No") << '\n';
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt; 
    while (tt--){
        solve();
    }
}