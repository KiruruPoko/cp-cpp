#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

// Source: KACTL
struct dsu { 
    vector<int> e; 
    void init(int n){
        e = vector<int>(n + 1, -1); // 1-indexed
    }
    int get(int x){
        return e[x] < 0? x : e[x] = get(e[x]);
    }
    bool same(int a, int b){
        return get(a) == get(b);
    }
    int size(int x){
        return -1 * e[get(x)];
    }
    bool merge(int x, int y){
        x = get(x), y = get(y); 
        if (x == y) return false;
        if (e[x] > e[y]) swap(x, y);
        e[x] += e[y]; 
        e[y] = x;
        return true;
    }
};
void solve(){
    int n, m; 
    cin >> n >> m;  
    vector<int> d(n + 1, 0);
    dsu uf;
    uf.init(n); 
    bool ans = true; 
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        if (uf.same(a, b)){
            cout << "No" << '\n';
            return; 
        }
        uf.merge(a, b);
        d[a]++;
        d[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (d[i] > 2) {
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
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
/*
basically check every node has no cycle and no degree more than 2
*/