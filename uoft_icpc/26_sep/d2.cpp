#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

struct segtree { 
    vector<ll> sums; 
    int size; 

    void init(int n){
        size = 1; 
        while (size < n) size *= 2; 
        sums.assign(2 * size, 0LL);
    }

    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1) {
            sums[x] = v;
            return; 
        }
        int m = (lx + rx) / 2; 
        if (i < m){
            set(i, v, 2 * x + 1, lx , m);
        }
        else {
            set(i, v, 2 * x + 2, m, rx);
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }
    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
    int mex(int x, int lx, int rx){
        if (rx - lx == 1) return lx; 
        int m = (lx + rx) / 2;  
        if (sums[2 * x + 1] < m - lx){
            return mex(2 * x + 1, lx, m);
        }
        return mex(2 * x + 2, m, rx);
    }
    int mex(){
        return mex(0, 0, size);
    }
};
void solve(){
    int n; 
    cin >> n; 
    vector<int> a(n);
    vector<int> freq(n + 1, 0);
    int mx = 0; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
        if (a[i] <= n) freq[a[i]]++;
    }  
    segtree st; 
    st.init(n + 1); 
    if (mx <= n) st.set(mx, 1);
    freq[mx <= n? mx : n] -= int(mx <= n);
    ll ans = 1LL * n * mx; 
    int used = 1; 
    int cur = st.mex();
    ans += cur;
    while (used < n){
        if (freq[cur] == 0){
            ans += 1LL * (n - used) * cur;
            break; 
        }
        freq[cur]--; 
        st.set(cur, 1);
        used++;

        cur = st.mex();
        ans += cur; 
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt; 
    cin >> tt;
    while (tt--){
        solve();
    }
}