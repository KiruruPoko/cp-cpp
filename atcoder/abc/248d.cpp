#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n; 
    cin >> n; 
    vector<vector<int>> a(n + 1);
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        a[x].push_back(i);
    }
    int q; 
    cin >> q; 
    while (q--){
        int l, r, x; 
        cin >> l >> r >> x;     
        int ans = lower_bound(all(a[x]), r) - lower_bound(all(a[x]), l - 1);
        cout << ans << '\n';
    }
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