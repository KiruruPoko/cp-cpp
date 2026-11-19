#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

const int INF = 1e9 + 7;
struct segtree {
    int f(int a, int b){
        return min(a, b);
    }
    vector<int> s;
    int n;
    segtree(int n = 0, int def = INF) : s(2 * n, def), n(n) {}
    void update(int i, int v){
        for (s[i += n] = v; i /= 2;){
            s[i] = f(s[i * 2], s[i * 2 + 1]);
        }
    }
    int query(int l, int r){
        int ra = INF, rb = INF;
        for (l += n, r += n; l < r; l /= 2, r /= 2){
            if (l % 2) ra = f(ra, s[l++]);
            if (r % 2) rb = f(s[--r], rb);
        }
        return f(ra, rb);
    }
};
void solve(){
    int n, q; 
    cin >> n >> q; 
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    segtree seg(n);
    for (int i = 0; i < n; i++){
        seg.update(i, A[i]);
    } 
    for (int i = 0; i < q; i++){
        int op; 
        cin >> op; 
        if (op == 1){
            int i, x; 
            cin >> i >> x;
            seg.update(i - 1, x);
        }
        else { 
            int l, r; 
            cin >> l >> r; 
            cout << seg.query(l - 1, r) << '\n';
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