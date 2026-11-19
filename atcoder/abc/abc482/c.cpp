#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){   
    int h, w, n, q;
    cin >> h >> w >> n >> q; 
    vector<int> row;
    vector<int> col; 
    for (int i = 0; i < n; i++){
        int r, c; 
        cin >> r >> c; 
        row.emplace_back(r);
        col.emplace_back(c);
    }
    sort(all(row));
    sort(all(col));
    while (q--){
        int op; 
        cin >> op; 
        if (op == 1){
            int u, d; 
            cin >> u >> d; 
            int ans = upper_bound(all(row), d) - lower_bound(all(row), u);
            cout << ans << '\n';
        }
        else {
            int l, r; 
            cin >> l >> r; 
            int ans = upper_bound(all(col), r) - lower_bound(all(col), l);
            cout << ans << '\n';
        }
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