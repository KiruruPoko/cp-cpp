#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n, q; 
    cin >> n; 
    vector<pll> a(n + 1, {-1e18, 0});
    vector<pll> p(n + 1, {-1e18, 0});
    for (int i = 1; i <= n; i++){
        cin >> a[i].first;
    }
    for (int i = 1; i <= n; i++){
        cin >> a[i].second;
    }
    sort(all(a));
    for (int i = 1; i <= n; i++){
        p[i].first = a[i].first; 
        p[i].second = p[i - 1].second + a[i].second;
    }
    cin >> q; 
    while (q--){
        ll l, r; 
        cin >> l >> r; 
        int left = lower_bound(all(a), make_pair(l, 0LL)) - a.begin();
        int right = upper_bound(all(a), make_pair(r, 1e18)) - a.begin();
        cout << p[right - 1].second - p[left - 1].second << '\n';
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