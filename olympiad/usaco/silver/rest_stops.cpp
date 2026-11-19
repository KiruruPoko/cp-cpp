#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int L, N, rf, rb;
    cin >> L >> N >> rf >> rb; 
    vector<int> x(N); 
    vector<int> c(N);
    for (int i = 0; i < N; i++) cin >> x[i] >> c[i];
    vector<bool> good(N);
    int mx_taste = 0; 
    for (int i = N - 1; i >= 0; --i){
        if (c[i] > mx_taste){
            good[i] = true; 
            mx_taste = c[i];
        }
    }
    ll prev = 0; 
    ll ans = 0; 
    for (int i = 0; i < N; i++){
        if (good[i]){
            ll cur_dist = x[i] - prev;
            ll f_time = cur_dist * rf; 
            ll b_time = cur_dist * rb;
            ll stop = f_time - b_time; 
            ans += stop * c[i];
            prev = x[i];
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

// USACO Silver Feb 2018 P1: Rest Stops
// https://usaco.org/index.php?page=viewproblem2&cpid=810