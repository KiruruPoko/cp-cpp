#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

struct segtree {
    vector<ll> values;
    int size; 
    void init(int n){
        size = 1;
        while (size < n) size *= 2; 
        values.assign(2 * size, 0LL);
    }
    void build(vector<int> &a, int x, int lx, int rx){
        if (rx - lx == 1){
            if (lx < sz(a)){
                values[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2; 
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = min(values[2 * x + 1], values[2 * x + 2]);
    }
    void build(vector<int> &a){
        init(sz(a));
        build(a, 0, 0, size);
    }
    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1){
            values[x] = v; 
            return; 
        }
        int m = (lx + rx) / 2; 
        if (i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else set(i, v, 2 * x + 2, m, rx);
        values[x] = min(values[2 * x + 1], values[2 * x + 2]);
    }
    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
    ll minimum(int l, int r, int x, int lx, int rx){
        if (lx >= r || l >= rx) return INT_MAX; 
        if (lx >= l && rx <= r) return values[x];
        int m = (lx + rx) / 2;
        ll s1 = minimum(l, r, 2 * x + 1, lx, m);
        ll s2 = minimum(l, r, 2 * x + 2, m, rx);
        return min(s1, s2);
    }
    ll minimum(int l, int r){
        return minimum(l, r, 0, 0, size);
    }
    // ll sum(int l, int r, int x, int lx, int rx){
    //     if (lx >= r || rx <= l) return 0; 
    //     if (lx >= l && rx <= r) return sums[x];
    //     int m = (lx + rx) / 2; 
    //     ll s1 = sum(l, r, 2 * x + 1, lx, m);
    //     ll s2 = sum(l, r, 2 * x + 2, m, rx);
    //     return s1 + s2;
    // }
    // ll sum(int l, int r){
    //     return sum(l, r, 0, 0, size);
    // }
};
void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<int> a(n);
    segtree st;
    for (int i = 0; i < n; i++) cin >> a[i];
    st.build(a);
    for (int i = 0; i < m; i++){
        int op; 
        cin >> op;
        if (op == 1){
            int i, v; 
            cin >> i >> v; 
            st.set(i, v);
        }
        else { 
            int l, r; 
            cin >> l >> r; 
            cout << st.minimum(l, r) << '\n';
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