#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, m; 
    cin >> n >> m; 
    vector<ll> a(n), b(m); 
    rep(i, n) cin >> a[i]; 
    rep(i, m) cin >> b[i]; 
    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end()); 
    vector<ll> x(n + m); 
    rep(i, n) x[i] = a[i]; 
    rep(i, m) x[n + i] = b[i] + 1; 
    ll ans = 1e9 + 1; 
    rep(i, n + m) { 
        int seller = upper_bound(a.begin(), a.end(), x[i]) - a.begin(); 
        int buyer = b.end() - lower_bound(b.begin(), b.end(), x[i]); 
        if (seller >= buyer) ans = min(ans, x[i]); 
    }
    cout << ans << '\n'; 
}
