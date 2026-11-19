#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

ll f(ll a, ll b){
    return (a * a * a) + (a * a * b) + (a * b * b) + (b * b * b);   
}
void solve(){
    ll n; 
    cin >> n;
    ll ans = 8e18; 
    for (ll i = 0; i * i * i <= n; i++){
        ll l = 0, r = 1e6; 
        while (l <= r){
            ll m = (l + r) / 2; 
            if (f(i, m) >= n){
                ans = min(ans, f(i, m));
                r = m - 1; 
            }
            else l = m + 1; 
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}