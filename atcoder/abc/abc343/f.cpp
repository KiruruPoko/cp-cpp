#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

struct item { 
    int m1, c1; // max value 
    int m2, c2; // 2nd largest
};
struct segtree { 
    int size; 
    vector<item> nodes;
    void update(item &res, int v, int c){
        if (c == 0) return; 
        if (v == res.m1) res.c1 += c; 
        else if (v == res.m2) res.c2 += c; 
        else if (v > res.m1){
            res.m2 = res.m1; 
            res.c2 = res.c1; 
            res.m1 = v; 
            res.c1 = c;
        }
        else if (v > res.m2){
            res.m2 = v; 
            res.c2 = c; 
        }
    }
    item merge(item a, item b){
        item temp = {0, 0, 0, 0};
        update(temp, a.m1, a.c1);
        update(temp, a.m2, a.c2);
        update(temp, b.m1, b.c1);
        update(temp, b.m2, b.c2);

        return temp;
    }
    void init(int n){
        size = 1; 
        while (size < n) size *= 2; 
        nodes.assign(2 * size, {0, 0, 0, 0});
    }
    void build(vector<int> &a, int x, int lx, int rx){
        if (rx - lx == 1){
            if (lx < sz(a)){
                nodes[x] = {a[lx], 1, 0, 0};
            }
            return; 
        }
        int m = (lx + rx) / 2; 
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);  
        nodes[x] = merge(nodes[2 * x + 1], nodes[2 * x + 2]);  
    }  
    void build(vector<int> &a){
        init(sz(a));
        build(a, 0, 0, size);
    }
    void modify(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1){
            nodes[x] = {v, 1, 0, 0};
            return; 
        }
        int m = (lx + rx) / 2;
        if (i < m){
            modify(i, v, 2 * x + 1, lx, m);
        }
        else modify(i, v, 2 * x + 2, m, rx);
        nodes[x] = merge(nodes[2 * x + 1], nodes[2 * x + 2]);
    }
    void modify(int i, int v){
        modify(i, v, 0, 0, size);
    }
    item max_count(int l, int r, int x, int lx, int rx){
        if (lx >= r || l >= rx) return {0, 0, 0, 0};
        if (lx >= l && rx <= r) return nodes[x];
        int m = (lx + rx) / 2;
        item s1 = max_count(l, r, 2 * x + 1, lx, m);
        item s2 = max_count(l, r, 2 * x + 2, m, rx);

        return merge(s1, s2);
    }
    item max_count(int l, int r){
        return max_count(l, r, 0, 0, size);
    }
};

void solve(){
    int n, q; 
    cin >> n >> q; 
    vector<int> A(n);
    segtree seg;
    for (int i = 0; i < n; i++) cin >> A[i];
    seg.build(A);
    while (q--){
        int op; 
        cin >> op; 
        if (op == 1){
            int i, v; 
            cin >> i >> v;
            seg.modify(i - 1, v);
        }
        else {
            int l, r; 
            cin >> l >> r; 
            auto ans = seg.max_count(l - 1, r);
            cout << ans.c2 << '\n';
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