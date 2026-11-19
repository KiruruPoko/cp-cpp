#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<int> a(n); 
    vector<int> cnt(n + 1, 0);
    int mex = 0; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < m){
            cnt[a[i]]++; 
            while (cnt[mex] > 0) mex++;
        }
    }
    int ans = mex; 
    for (int i = 1; i <= n - m; i++){
        cnt[a[i - 1]]--; 
        cnt[a[i + m - 1]]++; 
        if (cnt[a[i - 1]] == 0) ans = min(ans, a[i - 1]);
        if (ans == 0) break; 
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